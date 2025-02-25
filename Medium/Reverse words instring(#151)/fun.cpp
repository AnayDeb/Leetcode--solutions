#include<iostream>
#include<algorithm>
using namespace std;
string revword(string &s){
    reverse(s.begin(),s.end());
    string ans="";
    for(int i=0;i<s.size();i++){
        string word="";
        while(i<s.size() && s[i]!=' '){
            word=word+s[i];
            i++;
        }
        reverse(word.begin(),word.end());
        if(word.size()>0){
            ans=ans+' '+word;
        }
    }
    return ans.substr(1);
}
int main(){
    string str="the sky is blue";
    string s=revword(str);
    cout<<s<<endl;

    return 0;
}