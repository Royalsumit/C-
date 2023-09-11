#include<iostream>
using namespace std;

class node{
public:
    int data;
    node *next;
    node *prev;
    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};
void insertatHead(node * &head, int val)
{
    node *n = new node(val);
    n->next = head;
    if(head != NULL)
    {
        head->prev = n;
    }
    head = n;
}
void insertatTail(node* &head, int val)
{
    if(head == NULL)
    {
        insertatHead(head,val);
        return;
    }
    node* n =new node(val);
    node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}
void display(node * &head)
{
    node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void deleteatHead(node* &head)
{
    node* todelete = head;
    head = head->next;
    head->prev = NULL;
    delete todelete;
}
void deletion(node* &head, int pos)
{
    if(pos == 1)
    {
        deleteatHead(head);
        return;
    }
    node* temp= head;
    int count  = 1;
    while( temp!=NULL && count != pos)
    {
        temp = temp->next;
        count++;
    }
    temp->prev->next = temp->next;
    if(temp->next!=NULL)
    {
        temp->next->prev = temp->prev;
    }
    delete temp;
}
int main()
{
    node * head = NULL;
    insertatTail(head,20);
    insertatTail(head,25);
    insertatTail(head,22);
    insertatTail(head,27);
    insertatTail(head,29);
    display(head);
    insertatHead(head,15);
    display(head);
    deletion(head,3);
    display(head);
    return 0;
}