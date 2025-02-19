#include<iostream>
#include<unordered_map>
using namespace std;
char twice(string &s){
    unordered_map<char,int>map;
    for(int i=0;i<s.size();i++){
        map[s[i]]++;
        if(map[s[i]]==2){
            return s[i];
        }
    }
    return 0;
}
int main(){
    string s="abccbaacz";
    cout<<twice(s);

    return 0;
}