#include<iostream>
#include<map>
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
void inserttail(node*&tail,int a){
    node*temp=new node(a);
    tail->next=temp;
    tail=temp;
}
void dupli(node*&head){
    if(head==NULL||head->next==NULL){
        return ;
    }
    map<int,bool>visited;
    node*curr=head;
    node*prev=NULL;
    while(curr!=NULL){
        if(visited[curr->data]==true){
            prev->next=curr->next;
            delete curr;
            curr=prev->next;
        }else{
            visited[curr->data]=true;
            prev=curr;
            curr=curr->next;
        }
    }
}
void print(node*&head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    node*node1=new node(10);
    node*head=node1;
    node*tail=node1;
    inserttail(tail,10);
    inserttail(tail,20);
    inserttail(tail,20);
    inserttail(tail,30);
    inserttail(tail,40);
    print(head);
    dupli(head);
    print(head);


    return 0;
}