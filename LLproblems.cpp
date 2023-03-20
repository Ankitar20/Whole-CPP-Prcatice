#include <iostream>
using namespace std;
// 1.Reverse a linked list
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
/*void insertathead(node* &head,int val)
{
    node*n=new node(val);
    n->next=head;
    head=n;

}
*/
void insertattail(node *&head, int val)
{
    node *temp = head;

    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}
/*node *reverse(node *&head)
{
    node *prevptr = NULL;
    node *currptr = head;
    node *nextptr;

    while (currptr != NULL)
    {
        node *nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}*/
/*
int getmiddle(node*head){
 node*slow=head;
 node*fast=head;
 while(fast!=NULL&&fast->next!=NULL){
    slow=slow->next;
    fast=fast->next->next;

 }
 return slow->data;

}*/
node*reverseknodes(node*head,int k){
node*prevptr=NULL;
node*currptr=head;
node*nextptr;
int count=0;
while(currptr!=NULL&&count<k){
    nextptr=currptr->next;
    currptr->next=prevptr;
    prevptr=currptr;
    currptr=nextptr;
    count++;

}
if(nextptr!=NULL){
head->next=reverseknodes(nextptr,k);

}
return prevptr;

}
int main()
{
    node *head = NULL;
    insertattail(head, 1);
    insertattail(head, 2);
    insertattail(head, 3);
    insertattail(head, 4);
    display(head);
   //cout<< getmiddle(head);
   //node*newhead=reverse(head);
   // display(newhead);
   int k=3;
   // reverseknodes(head,k);
    node*newhead=reverseknodes(head,k);
    display(newhead);
    return 0;
}