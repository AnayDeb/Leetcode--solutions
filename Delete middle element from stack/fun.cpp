#include<iostream>//https://www.naukri.com/code360/problems/delete-middle-element-from-stack_985246?leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio&leftPanelTabValue=PROBLEM
#include<stack>
using namespace std;
void deletemid(stack<int>&s,int count,int size){
    if(count==size/2){
        s.pop();
        return;
    }
    int num=s.top();
    s.pop();
    deletemid(s,count+1,size);
    s.push(num);
}
int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout<<s.size()<<endl;
    deletemid(s,0,s.size());
    cout<<s.size()<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }



    return 0;
}