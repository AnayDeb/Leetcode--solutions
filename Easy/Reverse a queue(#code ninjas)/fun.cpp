#include<iostream>//https://www.geeksforgeeks.org/problems/queue-reversal/1
#include<queue>
#include<stack>
using namespace std;
queue<int>rev(queue<int>&q){
    stack<int>s;
    while(!q.empty()){
        int element=q.front();
        s.push(element);
        q.pop();
    }
    while(!s.empty()){
        int element=s.top();
        q.push(element);
        s.pop();
    }
    return q;
}
int main(){
    queue<int>q;
    q.push(4);
    q.push(3);
    q.push(1);
    q.push(10);
    q.push(2);
    q.push(6);

    rev(q);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }



    return 0;
}