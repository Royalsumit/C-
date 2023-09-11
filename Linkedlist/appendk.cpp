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
void insertatTail(node* &head, int val)
{
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
int length(node*head)
{
    int l = 0;
    node*temp = head;
    while (temp!=NULL)
    {
        l++;
        temp = temp->next;
    }
    return l;
}
node* kappend(node*&head, int k)
{
    node* newHead;
    node* newTail;
    node* tail = head;
    int l = length(head);
    k=k%l;
    int count = 1;
    while(tail->next!=NULL)
    {
        if(count == l-k)
        {
            newTail = tail;
        }
        if(count == l-k+1)
        {
            newHead = tail;
        }
        tail = tail -> next;
        count++;
    }
    newTail -> next = NULL;
    tail -> next = head;
    return newHead;
}

int main()
{

    node * head = new node(10);
    insertatTail(head,20);
    insertatTail(head,25);
    insertatTail(head,22);
    insertatTail(head,27);
    insertatTail(head,29);
    insertatTail(head,30);
    display(head);
    node* newhead = kappend(head,3);
    display(newhead);
    return 0;
}