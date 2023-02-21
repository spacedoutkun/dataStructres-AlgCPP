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


void insertAfter(Node* prev_node,int new_data)
{
  if(prev_node==NULL)
  {
    cout<<"cant be NULL";
    return;
  }
  
  Node* new_node=new Node();
  
  new_node->data=new_data;
  
  new_node->next=prev_node->next;
  
  prev_node->next=new_node;
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
  
  insertAfter(head->next, 8);
  
  cout<<"Created Linked list is";
  printList(head);
  return 0;
}