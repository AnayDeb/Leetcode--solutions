#include<iostream>
using namespace std;
bool  check( int a[26],int b[26]){
    for(int i=0;i<26;i++){
        if(a[i]!=b[i]){
            return false;
        }
    }
    return true;
}
bool IsPresent(string s1,string s2){
    int count1[26]={0};
    for(int i=0;i<s2.length();i++){
        count1[s2[i]-'a']++;
    }
    int count2[26]={0};
    int i=0;
    int window=s2.length();
    while(i<window ){
        count2[s1[i]-'a']++;
        i++;
    }
    if(check(count1,count2)){
        return true;
    }

    while(i<s1.length()){
        count2[s1[i]-'a']++;
        count2[s1[i-window]-'a']--;
        i++;
        if(check(count1,count2)){
            return true;
        }
    }
    return false;
}
int main(){
    string s1="sgcdjvdvaneb";
    string s2="ab";
    cout<<IsPresent(s1,s2);

    return 0;
}