#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int a){
        this->data=a;
        this->next=NULL;
    }
};
void inserttail(node *&tail, int a){
    node *temp = new node(a);
    tail->next = temp;
    temp->next = NULL;
    tail = temp;
}
node*Reverse(node*&head,int k){
    if(head==NULL||k==1){
        return head;
    }
    node*temp=head;
    int count=0;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    if(count<k){
        return head;
    }
    node*curr=head;
    node*prev=NULL;
    node*forward=NULL;
    int cnt=0;
    while(cnt<k && curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        cnt++;
    }
    if(curr!=NULL){
        head->next=Reverse(forward,k);
    }
    return prev;
}
void print(node *&head){
    node *temp = head;
    while (temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main(){
    node*node1=new node(10);
    node*head=node1;
    node*tail=node1;
    inserttail(tail,12);
    inserttail(tail,14);
    inserttail(tail,16);
    inserttail(tail,18);
    // inserttail(tail,19);
    print(head);
    head=Reverse(head,2);
    print(head);


    return 0;
}