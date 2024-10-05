#include<bits/stdc++.h> 
#include<algorithm>

using namespace std;

void f(int i, int n){

    if(i>n) return;
    f(i+1,n);
    cout<<i<<endl;

}


int factorial(int n){
    if(n==1)
        return 1;
    return n*factorial(n-1);
}

int reverse_array(int a[],int l,int r){
    if(l>=r)
        return 0;
    swap(a[l],a[r]);
    reverse_array(a,l+1,r-1);
}


void check_palindrome(string a,int i,int n){
    if(i>=n/2){
        cout<<"Palindrome";
        return;
    }
    if(a[i]!=a[n-i-1]){
        cout<<"not Palindrome";
        return;
    }
    check_palindrome(a,i+1,n);
}





int main(){
    
    // f(0,5);
    // cout<<factorial(5);
    // int a[]={10,20,30,40,50,60};
    // int size=5;
    // reverse_array(a,0,size);
    // for(auto i:a)
    //     cout<<i<<" ";
    string r;
    cin>> r;
    check_palindrome(r,0,r.size());

    return 0;
} 