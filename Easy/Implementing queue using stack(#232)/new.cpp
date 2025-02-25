#include<iostream>
#include<stack>
using namespace std;
class myqueue{
    public:
    stack<int>s1,s2;
    myqueue(){};

    void push(int x){
        s1.push(x);
    }
    int pop(){
        if(s1.empty() && s2.empty()){
            return -1;
        }
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        int front=s2.top();
        s2.pop();
        return front;
    }
    int peek(){
        if(s1.empty() && s2.empty()){
            return -1;
        }
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
    }
};
int main(){
    myqueue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.pop();
    cout<<q.peek();

    return 0;
}