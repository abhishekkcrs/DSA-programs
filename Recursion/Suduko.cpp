#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    void solve(vector<int>& nums,int idx, set<vector<int>>&p, vector<int> &a){
        
        //base case
        if(idx==nums.size()){
            p.insert(a);
            return;
        }
        //forward cond

        //takecond
        a.push_back(nums[idx]);
        solve(nums,idx+1,p,a);
        a.pop_back();
        //not take
        solve(nums,idx+1,p,a);
        //backtrack
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set <vector<int>> p1;
        sort(nums.begin(),nums.end());
        vector<vector<int>> vec2D;
        vector<int>a;
        solve(nums,0,p1,a);
        for (auto& p : p1) 
            vec2D.push_back(p);
        return vec2D;
    }


};