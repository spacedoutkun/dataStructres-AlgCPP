#include <iostream>
using namespace std;
class Node
{
  public:
  int data;
  Node *next;
};
void deleteNode(Node **head,int position)
{
  Node *prev=new Node();
  Node *temp=new Node();
  *prev=*temp;
  for(int i=0;i<position;i++)
  {
      if(i==0 && position==1)
      {
        
        (*head)=(*head)->next;
        
        free(temp);
      }
      else
      {
        if(i==position-1 && temp)
        {
          prev->next=temp->next;
          
          free(temp);
          
        }
        else
        {
          prev=temp;

          if(prev==NULL) { break; }
          
          temp=temp->next;
          
        }
        
      }

  }
}



void insertHead(Node** head_ref,int new_data)
{
  Node* new_node=new Node();
  new_node->data=new_data;
  new_node->next=(*head_ref);
  
  (*head_ref)=new_node;
}
void printList(Node *node)
{
  while(node!=NULL)
  {
    cout<<node->data<<" ";
    node=node->next;
  }
  
}
int main() 
{
  Node* head=NULL;
  insertHead(&head,1);
  insertHead(&head,2);
  insertHead(&head,3);
  insertHead(&head,4);
  
  printList(head);
  
  cout<<endl<<"After delete ";
  deleteNode(&head,1);
  printList(head);
    
    return 0;
}