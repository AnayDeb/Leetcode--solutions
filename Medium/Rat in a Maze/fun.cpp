#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isSafe(vector<vector<int>>&mat,vector<vector<int>>&visited,int x,int y){
    if(x>=0 && y>=0 && x<=mat.size()-1 && y<=mat[0].size()-1 && visited[x][y]==0 && mat[x][y]==1){
        return true;
    }else{
        return false;
    }
}
void solve(vector<vector<int>>&mat,vector<vector<int>>&visited,int x,int y,string path,vector<string>&ans){
    //base case;
    if(x>=mat.size()-1 && y>=mat[0].size()-1){
        ans.push_back(path);
        return;
    }
    visited[x][y]=1;
    //down
    int newx=x+1;
    int newy=y;
    if(isSafe(mat,visited,newx,newy)){
        path.push_back('D');
        solve(mat,visited,newx,newy,path,ans);
        path.pop_back();
    }
    //right
    newx=x;
    newy=y+1;
    if(isSafe(mat,visited,newx,newy)){
        path.push_back('R');
        solve(mat,visited,newx,newy,path,ans);
        path.pop_back();
    }
    //left
    newx=x;
    newy=y-1;
    if(isSafe(mat,visited,newx,newy)){
        path.push_back('L');
        solve(mat,visited,newx,newy,path,ans);
        path.pop_back();
    }
    //up
    newx=x-1;
    newy=y;
    if(isSafe(mat,visited,newx,newy)){
        path.push_back('U');
        solve(mat,visited,newx,newy,path,ans);
        path.pop_back();
    }

    visited[x][y]=0;
}
int main(){
    vector<vector<int>>mat={{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};
    vector<vector<int>>visited(mat.size(),vector<int>(mat[0].size(),0));
    int x=0;
    int y=0;
    string path="";
    vector<string>ans;
    solve(mat,visited,x,y,path,ans);
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }


    return 0;
}