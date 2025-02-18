#include<iostream>//https://www.naukri.com/code360/problems/reverse-stack-using-recursion_631875?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio&leftPanelTabValue=SUBMISSION
#include<stack>
using namespace std;
void insert(stack<int>&s,int x){
    if(s.empty()){
        s.push(x);
        return ;
    }
    int num=s.top();
    s.pop();
    insert(s,x);
    s.push(num);
}
void rev(stack<int>&s){
    if(s.empty()){
        return ;
    }
    int num=s.top();
    s.pop();
    rev(s);
    insert(s,num);
}
int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    rev(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }



    return 0;
}