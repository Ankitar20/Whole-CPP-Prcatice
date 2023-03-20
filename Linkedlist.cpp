/*#include <iostream>
using namespace std;
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
void insertAthead(node* &head, int val){
    node*n=new node(val);
    n->next=head;
    head=n;

}
void insertAtTail(node *&head, int val)
{

    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return ;
    }

    node* temp=head;
    while(temp->next!=NULL){
          temp=temp->next;

    }
    temp->next=n;
}
bool search(node*head,int key){
    node*temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;


}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data <<"->";
        temp = temp->next;
    }
    cout << endl;
}


int main()
{

    node *head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);
    insertAthead(head,4);
    display(head);
    cout<<search(head,5);
    return 0;
}
/*
// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node*next;

//  node(int val){
//   int data=val;
//   next=NULL;

//  }
// };

//  void insertattail(node* &head,int val){
//    node*n= new node(val);
//   if(head==NULL){
//     head=n;


//   }
//   node*temp=head;
//   while(temp->next!=NULL){
//   temp=temp->next;


//   }
//   temp->next=n;
//  }
//  void display(node*head){
//     node*temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<"->";
//      temp=temp->next;

//     }
//     cout<<endl;
//  }

// int main(){
//    node *head=NULL;
//    insertattail(head,1);
//    insertattail(head,2);
//    insertattail(head,3);
//    display(head);


// return 0;
// }
include <iostream>
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
void insertattail(node *head, int val)
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
node *reverse(node *&head)
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
}
int main()
{
    node *head = NULL;
    insertattail(head, 1);
    insertattail(head, 2);
    insertattail(head, 3);
    insertattail(head, 4);
    display(head);
    node *newhead = reverse(head);
    display(newhead);

    return 0;
}