#include<iostream>
using namespace std;
char getMax(string st){
    int arr[26]={};
    for(int i=0;i<st.length();i++){
        int ch=st[i]-'a';
        arr[ch]++;
    }
    int max=0;
    int ans=0;
    for(int i=0;i<26;i++){
        if(max<arr[i]){
            ans=i;
            max=arr[i];
        }
    }
    return ans+'a';
}
int main(){
    string str="outputttuuuu";  
    cout<<getMax(str);
    return 0;
}