#include<iostream>
#include<vector>
using namespace std;
void solve(vector<int>nums,int index,vector<int>output,vector<vector<int>>&ans){
    if(index>=nums.size()){
        ans.push_back(output);
        return ;
    }
    solve(nums,index+1,output,ans);
    int element=nums[index];
    output.push_back(element);
    solve(nums,index+1,output,ans);
}
int main(){
    vector<int>nums={1,2,3};
    vector<int>output;
    vector<vector<int>>ans;
    solve(nums,0,output,ans);
    for(int i=0;i<ans.size();i++){
        cout<<"[";
        for(int j=0;j<ans[i].size();j++){
            cout<<" "<<ans[i][j]<<" ";
        }cout<<"]"<<endl;
    }

    return 0;
}