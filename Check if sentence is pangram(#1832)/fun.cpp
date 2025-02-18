#include<iostream>
#include<unordered_map>
using namespace std;
bool ispanagram(string str){
    unordered_map<char,int>map;
    for(int i=0;i<str.size();i++){
        map[str[i]]++;
    }
    if(map.size()!=26){
        return false;
    }
    return true;
}
int main(){
    string str="thequickbrownfoxjumpsoverthelazyog";
    if(ispanagram(str)){
        cout<<"it is panagram"<<endl;
    }else{
        cout<<"not panagram"<<endl;
    }

    return 0;
}