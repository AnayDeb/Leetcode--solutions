#include<iostream>
#include<vector>
using namespace std;
void solve(string str,string output,int index,vector<string>&ans,string mapping[]){
    if(index>=str.size()){
        ans.push_back(output);
        return ;
    }
    //wo number ka int mai wahi number nikal rhe;
    int number=str[index]-'0';
    //map kar rhe h wo number ko uski mapping k sath;
    string value=mapping[number];
    //output mai ek ek karke sabko dal rha hai(example: abc ko ek ek karke dal rha);
    for(int i=0;i<value.size();i++){
        output.push_back(value[i]);
        solve(str,output,index+1,ans,mapping);
        //pop karna warna sahi se output nhi ayega;
        output.pop_back();
    }
}
int main(){
    string str="23";
    string output="";
    vector<string>ans;
    string mapping[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    solve(str,output,0,ans,mapping);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }


    return 0;
}