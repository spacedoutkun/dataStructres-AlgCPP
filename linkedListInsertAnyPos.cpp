//Array delete element by finding its position
#include <iostream>
using namespace std;
class Node
{
  public:
  int data;
  Node *next;
};
void insertHead(Node** head_ref,int new_data)
{
  Node* new_node=new Node();
  
  new_node->data=new_data;
  new_node->next=(*head_ref);
  
  (*head_ref)=new_node;
}

//insert at any position
void insertAfter(Node** head_ref,int new_data,int key)
{
  
  Node* new_node=new Node();
  
  new_node->data=new_data;
  
  if(key==(*head_ref)->data)
  {
    new_node->next=(*head_ref);
    
    (*head_ref)=new_node;
    return;
  }
  
  Node* temp=(*head_ref);
  while(temp->data!=key)
  {
    temp=temp->next;
    if(temp==NULL)
    {
      return;
    }
  }
  
  new_node->next=temp->next;
  
  temp->next=new_node;
  return;
  
  
}



void insertLast(Node** head_ref,int new_data)
{
  Node* new_node=new Node();
  
  Node *last=*head_ref;
    
  new_node->data=new_data;
  new_node->next=NULL;
  

  
  
  if(*head_ref==NULL)
  {
    *head_ref=new_node;
    return;
  }
  
  while(last->next!=NULL)
  {
    last=last->next;
  }
  last->next=new_node;
  return;
  
}


void printList(Node *node)
{
  while(node!=NULL)
  {
    cout<<" "<<node->data;
    node=node->next;
  }
}


int main() 
{
  Node* head=NULL;
  
  insertLast(&head, 6);
  
  
  insertHead(&head, 7);
  
  insertHead(&head, 1);
  
  
  insertLast(&head, 4);
  
  insertAfter(&head, 8,7);
  
  cout<<"Created Linked list is";
  printList(head);
  return 0;
}