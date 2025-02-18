#include<iostream>
using namespace std;//https://www.naukri.com/code360/problems/two-stacks_983634?leftPanelTab=0%3Fsource%3Dyoutube&campaign=YouTube_CodestudioLovebabbar5thfeb&leftPanelTabValue=PROBLEM
class twostack{
    public:
    int *arr;
    int top1;
    int top2;
    int size;

    twostack(int s){
        this->size=s;
        top1=-1;
        top2=s;
        arr=new int[s];
    }

    void push1(int n){
        if(top2-top1>1){
            top1++;
            arr[top1]=n;
        }else{
            cout<<"stack is overFlow"<<endl;
        }
    }
    void push2(int n){
        if(top2-top1>1){
            top2--;
            arr[top2]=n;
        }else{
            cout<<"stack is overFlow"<<endl;
        }
    }
    int pop1(){
        if(top1>-1){
            return arr[top1--];
        }else{
            cout<<"stack is underflow"<<endl;
            return -1;
        }
    }
    int pop2(){
        if(top2<size){
            return arr[top2++];
        }else{
            cout<<"stack is underflow"<<endl;
            return -1;
        }
    }
};
int main(){


    return 0;
}