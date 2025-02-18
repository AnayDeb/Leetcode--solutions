#include<iostream>//https://www.naukri.com/code360/problems/sort-a-stack_985275?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio&leftPanelTabValue=SUBMISSION
#include<stack>
using namespace std;
void insert(stack<int>&s,int x){
    if(s.empty() || (s.top()<x)){
        s.push(x);
        return ;
    }
    int n=s.top();
    s.pop();
    insert(s,x);
    s.push(n);
}
void sort(stack<int>&s){
    if(s.empty()){
        return ;
    }
    int num=s.top();
    s.pop();
    sort(s);
    insert(s,num);
}
int main(){
    stack<int>s;
    s.push(9);
    s.push(7);
    s.push(11);
    s.push(6);
    s.push(20);
    sort(s);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }


    return 0;
}
#include<stack>
using namespace std;
void insert(stack<int>&s,int x){
    if(s.empty() || (s.top()<x)){
        s.push(x);
        return ;
    }
    int n=s.top();
    s.pop();
    insert(s,x);
    s.push(n);
}
void sort(stack<int>&s){
    if(s.empty()){
        return ;
    }
    int num=s.top();
    s.pop();
    sort(s);
    insert(s,num);
}
int main(){
    stack<int>s;
    s.push(9);
    s.push(7);
    s.push(11);
    s.push(6);
    s.push(20);
    sort(s);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }


    return 0;
}