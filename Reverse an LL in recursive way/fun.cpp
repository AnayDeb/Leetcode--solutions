#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int a)
    {
        this->data = a;
        this->next = NULL;
    }
};
void inserttail(node *&tail, int a)
{
    node *temp = new node(a);
    tail->next = temp;
    temp->next = NULL;
    tail = temp;
}
void rev(node*&head,node*prev,node*curr){
    if(curr==NULL){
        head=prev;
        return;
    }
    node*forward=curr->next;
    curr->next=prev;
    rev(head,curr,forward);
}
void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main(){
    node*node1=new node(1);
    node*tail=node1;
    node*head=node1;
    inserttail(tail,2);
    inserttail(tail,3);
    inserttail(tail,4);
    inserttail(tail,5);
    inserttail(tail,6);
    print(head);
    rev(head,NULL,head);
    print(head);


    return 0;
}