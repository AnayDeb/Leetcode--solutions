#include<iostream>//https://www.naukri.com/code360/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio&leftPanelTabValue=SUBMISSION
#include<stack>
using namespace std;
void insert(stack<int>&st,int x){
    if(st.empty()){
        st.push(x);
        return ;
    }
    int num=st.top();
    st.pop();
    insert(st,x);
    st.push(num);
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    int x=5;
    insert(st,x);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}