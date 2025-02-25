#include<iostream>
#include<unordered_map>
using namespace std;
bool occurenceEqual(string& str){
    unordered_map<char,int>map;
    for(int i=0;i<str.size();i++){
        map[str[i]]++;
    }
    int freq=map[str[0]];
    for(int i=0;i<str.size();i++){
        if(map[str[i]]!=freq){
            return false;
        }
    }
    return true;
}
int main(){
    string str="abacbc";
    if(occurenceEqual(str)){
        cout<<"equal hai"<<endl;
    }else{
        cout<<"not equal"<<endl;
    }

    return 0;
}