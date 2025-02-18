#include<iostream>
#include<string>
using namespace std;
bool ValidCharacter(char ch){
    if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')||(ch>='0' && ch<='1')){
        return true;
    }
    return false;
}
char LowerCase(char ch){
    if((ch>='a' && ch<='z')||(ch>='0' && ch<='9')){
        return ch;
    }
    int temp=ch-'A'+'a';
    return temp;
}
bool IsPalindrone(string a){
    int start=0;
    int end=a.size()-1;
    while(start<=end){
        if(a[start]!=a[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main(){
    string str="NoOn";
    string temp="";
    for(int i=0;i<str.length();i++){
        if(ValidCharacter(str[i])){
            temp.push_back(LowerCase(str[i]));
        }
    }
    for(int j=0;j<temp.size();j++){
        temp[j]=LowerCase(temp[j]);
    }
    cout<<IsPalindrone(temp);
    return 0;
}