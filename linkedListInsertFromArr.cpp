//Array delete element by finding its position
#include <iostream>
using namespace std;
/*

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
*/

class Node
{
  public:
  int data;
  Node* next;
};

void insertLast(Node** head_ref,int new_data)
{
  Node* new_node=new Node();
  
  Node *last_node=*head_ref;
  
  new_node->data=new_data;
  new_node->next=NULL;
  
  if(*head_ref==NULL)
  {
    *head_ref=new_node;
    return;
  }
  while(last_node->next!=NULL)
  {
    last_node=last_node->next;
  }
  last_node->next=new_node;
  return;
  
}
void insertHead(Node** head_ref,int  new_data)
{
  Node* new_node=new Node();
  
  new_node->data=new_data;
  new_node->next=*head_ref;
  
  (*head_ref)=new_node;
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
  /*
  insertLast(&head, 6);
  
  
  insertHead(&head, 7);
  
  insertHead(&head, 1);
  
  */
  int arr[5]={12,45,23,76,98};
  int n;
  n=sizeof(arr)/sizeof(arr[0]);
  
  for(int i=0;i<n;i++)
  {
    insertLast(&head, arr[i]);
  }
  
  
  //insertAfter(head->next, 8);
  
  cout<<"Linked list after inserting elements at last pos is";
  printList(head);
  
  
  cout<<endl;
  for(int i=0;i<n;i++)
  {
    insertHead(&head, arr[i]);
  }
  
  
  //insertAfter(head->next, 8);
  
  cout<<"Linked list after inserting elements at Head pos is";
  printList(head);
  return 0;
}