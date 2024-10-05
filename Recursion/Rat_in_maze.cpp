#include<bits/stdc++.h>

using namespace std;

class Solution {
public:

    vector<vector<int>> maze;

    void setmaze(int n){
        maze.resize(n, vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>maze[i][j];
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
                cout<<maze[i][j]<<" ";
            cout<<endl;
        }

        cout<< endl;
    }

    void solve(int row, int col, int n,string &trail, vector<vector<int>> &visit,vector <string> &path){

        //base condition
        if(row==n-1 && col==n-1){
            path.push_back(trail);
            return;
        }

        //Down Move
        if(row<n-1 && maze[row+1][col]== 1 && visit[row+1][col]==0){
            trail+="D";
            visit[row+1][col]=1;
            solve(row+1,col,n,trail,visit,path);
            trail.pop_back();
            visit[row+1][col]=0;
        }

        //Left Move
        if(col>0 && maze[row][col-1]== 1 && visit[row][col-1]==0){
            trail+="L";
            visit[row][col-1]=1;
            solve(row,col-1,n,trail,visit,path);
            trail.pop_back();
            visit[row][col-1]=0;
        }
        
        //Right Move
        if(col<n-1 && maze[row][col+1]== 1 && visit[row][col+1]==0){
            trail+="R";
            visit[row][col+1]=1;
            solve(row,col+1,n,trail,visit,path);
            trail.pop_back();
            visit[row][col+1]=0;
        }

        //Up Move
        if(row > 0 && maze[row-1][col]== 1 && visit[row-1][col]==0){
            trail+="U";
            visit[row-1][col]=1;
            solve(row-1,col,n,trail,visit,path);
            trail.pop_back();
            visit[row-1][col]=0;
        }

    }

    vector <string> rat_maze(int n) {
        vector<vector<int>> visit(n,vector<int>(n,0));
        setmaze(n);
        vector<string> path;
        string trail;
        solve(0,0,n,trail,visit,path);
        return path; 
    }
};

int main(){
    Solution o;
    vector <string> paths =  o.rat_maze(4);
    for(auto i:paths)
        cout<<i<<endl;

}