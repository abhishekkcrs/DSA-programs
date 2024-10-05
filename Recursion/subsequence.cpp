#include<bits/stdc++.h>

using namespace std;

void subsequence(int index, vector <int> &dp,int arr[],int n){

    if(index==n){
        for(auto a:dp)
            cout<<a;
        if(dp.empty())
            cout<<"{}";
        cout<<endl;

        return;
    }
    subsequence(index+1,dp,arr,n);
    dp.push_back(arr[index]);
    subsequence(index+1,dp,arr,n);
    dp.pop_back();
    
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    vector<int> a;
    subsequence(0,a, arr,n);
}