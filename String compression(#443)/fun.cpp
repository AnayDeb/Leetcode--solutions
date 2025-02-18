#include<iostream>
using namespace std;
int compress(string &s){
    int i=0;
    int ansindex=0;
    int n=s.size();
    while(i<n){
        int j=i+1;
        while(j<n && s[i]==s[j]){
            j++;
        }
        int count=j-i;
        s[ansindex++]=s[i];
        if(count>1){
            string str=to_string(count);
            for(char dig:str){
                s[ansindex++]=dig;
            }
        }
        i=j;
    }
    return ansindex;
}
int main(){
    string str="aaabbbcccc";
    cout<<compress(str)<<endl;


    return 0;
}