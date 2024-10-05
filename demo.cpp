#include<bits/stdc++.h>

using namespace std;

bool palindrome(string s,int start, int end){
    while(start<=end){
        if(s[start++] != s[end--])
            return false;
    }
    return true;
}

void p_partition(string a,int start, vector<string> &p){
    if(start == a.size()){
        for(auto i:p) 
            cout<<i<<" ";
        cout<<endl;
        return;
    }
    for(int i=start;i<a.size();i++){
        string sub_a=a.substr(start,i-start+1);
        if (palindrome(sub_a,start,i)){
            p.push_back(sub_a);
            p_partition(a,i+1,p);
        
        p.pop_back();
        }
    }
}

int main(){
    string a="hello";
    vector<string> p;
    p_partition(a,0,p);

}
