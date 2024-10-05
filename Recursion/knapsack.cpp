#include<bits/stdc++.h>

using namespace std;

int knapsnack(int W, vector <int> &weight, vector <int> &value, int n, vector <vector<int>> &dp){
    if(n == 0 || W==0)
        return 0;
    if(dp[n][W] != -1)
        return dp[n][W];

    if(weight[n-1]>W)
        dp[n][W]=knapsnack(W,weight,value,n-1,dp);
    else{
        int exclude=knapsnack(W,weight,value,n-1,dp);
        int include=value[n-1]+knapsnack(W-weight[n-1],weight,value,n-1,dp);
        dp[n][W]=max(include,exclude);
    }
    return dp[n][W];
}

int main(){
    int W=9 ;
    vector <int> weight={2,3,4,5,6};
    vector <int> value={20,30,40,50,60};
    int n=weight.size();
    vector <vector<int>> dp(n+1,vector<int>(W+1,-1));
    int maxi=knapsnack(W,weight,value,n,dp);
    cout<<maxi;
    return 0;

}