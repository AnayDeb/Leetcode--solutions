#include<iostream>
#include<unordered_map>
using namespace std;
bool Anagram(string s,string t){
    if(s.size()!=t.size()){
        return false;
    }
    unordered_map<char,int>count;
    for(int i=0;i<s.size();i++){
        count[s[i]]++;
    }
    for(int i=0;i<t.size();i++){
        count[t[i]]--;
    }
    for(int i=0;i<=26;i++){
        char ch='a'+i;
        if(count[ch]!=0){
            return false;
        }
    }
    return true;
}
int main(){
    string s="god";
    string t="dog";
    if(Anagram(s,t)){
        cout<<"it is anagram"<<endl;
    }else{
        cout<<"not anagram"<<endl;
    }


    return 0;
}