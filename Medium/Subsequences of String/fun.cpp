#include<iostream>
#include<vector>
using namespace std;
void solve(string str,int index,string output,vector<string>&ans){
    if(index>=str.size()){
        if(output.size()>0){
            ans.push_back(output);
        }
        return;
    }
    //exclude k liye bs agee bar jao
    solve(str,index+1,output,ans);
    //include kar wahi wala character
    int character=str[index];
    output.push_back(character);
    //include k liye
    solve(str,index+1,output,ans);
}
int main(){
    string str="abc";
    vector<string>ans;
    string output;
    solve(str,0,output,ans);
    for(int i=0;i<ans.size();i++){
        cout<<"[";
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j];
        }
        cout<<"]";
    }


    return 0;
}