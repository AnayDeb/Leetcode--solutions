#include<iostream>//https://www.naukri.com/code360/problems/queue-using-array-or-singly-linked-list_2099908?leftPanelTab=0%3Fsource%3Dyoutube&campaign=LoveBabbar_Codestudio&leftPanelTabValue=SUBMISSION
using namespace std;
class queue{
    int *arr;
    int size;
    int front;
    int rear;
    public:
    queue(int s){
        this->size=s;
        arr=new int[s];
        front=0;
        rear=0;
    }
    void enque(int a){
        if(rear==size){
            cout<<"full"<<endl;
        }else{
            arr[rear]=a;
            rear++;
        }
    }
    void deque(){
        if(front==rear){
            cout<<"empty"<<endl;
        }else{
            front++;
            if(front==rear){
                front=0;
                rear=0;
            }
        }
    }
    bool isempty(){
        if(front==rear){
            return true;
        }else{
            return false;
        }
    }
    int pehla(){
        if(rear==front){
            return -1;
        }else{
            return arr[front];
        }
    }
};
int main(){
    queue q(5);
    q.enque(10);
    q.enque(20);
    q.enque(30);
    while(!q.isempty()){
        cout<<q.pehla()<<" ";
        q.deque();
    }


    return 0;
}