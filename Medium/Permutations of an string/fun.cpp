#include<iostream>
#include<vector>
using namespace std;
void solve(string str,int index,vector<string>&ans){
    if(index>=str.size()){
        //nums diya h kyuki last tree tak "str" rehta naya string nahi bana rhe;
        ans.push_back(str);
        return;
    }
    for(int i=index;i<str.size();i++){
        swap(str[index],str[i]);
        solve(str,index+1,ans);
        //backtracking horhi is wale swaping se taki ans thik rhe; 
        swap(str[index],str[i]);
    }
}
int main(){
    string str="abc";
    vector<string>ans;
    solve(str,0,ans);
    for(int i=0;i<ans.size();i++){
        cout<<"[";
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j];
        }
        cout<<"]";
    }

    return 0;
}