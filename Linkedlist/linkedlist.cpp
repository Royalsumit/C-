//				DATA STRUCTURES NOTES
//========================================================================================


//LINKED LIST
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


#include <iostream>
using namespace std;
class Node
{
public:
int data;
Node* next;
Node(int d)
{
  this->data = d;
  this->next = NULL;
}
~Node()
{
  int value = this->data;
  if(this->next!=NULL)
  {
    this->next = NULL;
  }
}
};


//------------------------INSERTION-------------------------------

void insertAtTail(Node* &head, int data)
{
Node* newNode = new Node(data);
  if(head == NULL)
  {
    head = newNode;
    return;
  }
  Node* temp  = head;
  while(temp->next!=NULL)
    {
      temp=temp->next;
    }
  temp->next = newNode;
}
void insertAtHead(Node* &head,int data)
{
  Node* node1 = new Node(data);
  node1->next = head;
  head = node1;
}


//------------------------TRAVERSAL--------------------------------


void display(Node* &head)
{
  Node* temp = head;
  while(temp != NULL)
    {
      cout<<temp->data<<" ";
      temp=temp->next;
    }
  cout<<endl;
}


//-----------------------DELETION----------------------------------


void deletion(Node* &head, int pos)
{
  Node* temp = head;
  while(temp->next->data != pos)
    {
      temp=temp->next;
    }
  Node* todelete = temp->next;
  temp->next = temp->next->next;
  delete todelete;
}

//----------------------REVERSAL----------------------------------

Node* reversal(Node* &head)
{
  Node* tempcur  = head;
  Node* prev = NULL;
  Node* next1 = tempcur->next;
  while(tempcur!=NULL)
    {
      tempcur->next = prev;
      prev = tempcur;
      tempcur = next1;
      next1 = tempcur->next;
    }
  return prev;
}


int main() 
{
  Node* head = NULL;
  insertAtTail(head,12);
  insertAtTail(head,13);
  insertAtTail(head,14);
  insertAtTail(head,15);
  insertAtTail(head,16);
  display(head);
  insertAtHead(head,25);
  display(head);
  deletion(head,14);
  display(head);
}