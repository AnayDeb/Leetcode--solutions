#include<iostream>
#include<stack>
using namespace std;
int numparenthesis(string& s){
    int open=0;
    int res=0;
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        if(ch=='('){
            open++;
        }else if(open>0){
            open--;
        }else{
            res++;
        }
    }
    return res+open; 
}
int main(){
    string str="(((";
    cout<<numparenthesis(str);

    return 0;
}