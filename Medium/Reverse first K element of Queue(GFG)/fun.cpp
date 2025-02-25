#include<iostream>//https://www.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1
#include<stack>
#include<queue>
using namespace std;
queue<int>revinK(queue<int>&q,int k){
    stack<int>s;
    for(int i=0;i<k;i++){
        int element=q.front();
        q.pop();
        s.push(element);
    }
    while(!s.empty()){
        int element=s.top();
        s.pop();
        q.push(element);
    }
    for(int i=0;i<q.size()-k;i++){
        int element=q.front();
        q.pop();
        q.push(element);
    }
    return q;
}
int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    int k=3;
    queue<int>ans=revinK(q,k);
    while(!ans.empty()){
        cout<<ans.front()<<" ";
        ans.pop();
    }

    return 0;
}