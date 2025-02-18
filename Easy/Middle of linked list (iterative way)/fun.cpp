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
int getlen(node*&head){//ye wala length nikalta hai;
    node*temp=head;
    int cnt=0;
    while(temp!=NULL){
        temp=temp->next;
        cnt++;
    }
    return cnt;
}
node*middle(node*&head){//ye wala mast approach hai;
    if(head==NULL || head->next==NULL){
        return head;
    }
    node*fast=head->next;
    node*slow=head;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
    }
    return slow;
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
    node*head=node1;
    node*tail=node1;
    inserttail(tail,2);
    inserttail(tail,3);
    inserttail(tail,4);
    inserttail(tail,5);
    inserttail(tail,6);
    print(head);
    cout<<getlen(head)/2+1<<endl;
    cout<<middle(head)->data;

    return 0;
}