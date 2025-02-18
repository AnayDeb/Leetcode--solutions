#include<iostream>
using namespace std;
bool check(char ch[],int n){
    int start=0;
    int end=n-1;
    while(start<end){
        if(ch[start]!=ch[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main(){
    char st[]="anay";
    int ans=check(st,4);
    cout<<ans;
    return 0;
}