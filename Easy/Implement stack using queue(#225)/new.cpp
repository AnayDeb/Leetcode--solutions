#include<iostream>
#include<queue>
using namespace std;
class mystack{
    public:
    queue<int>q;
    mystack(){

    }
    void push(int x){
        q.push(x);
        int size=q.size();
        while(size>1){
            q.push(q.front());
            q.pop();
            size--;
        }
    }
    void pop(){
        if(q.empty()){
            return ;
        }else{
            q.pop();
        }
    }
    int peek(){
        if(q.empty()){
            return -1;
        }else{
            return q.front();
        }
    }
};
int main(){
    mystack s;
    s.push(10);
    s.push(20);
    s.pop();
    cout<<s.peek();


    return 0;
}