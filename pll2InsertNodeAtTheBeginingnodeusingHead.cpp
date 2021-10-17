#include<bits\stdc++.h>
using namespace std;
class node{
  public:
      int data;
      node* next;

      node(int val)
      {
        data = val;
         next=NULL;
      }
};
  void insert_node_at_begin_using_head(node* &head,int val){
    node* n = new node(val);
    n->next = head;
    head = n;
  }

  void printLL(node* head){
        node* temp = head;
        while(temp!= NULL){
          cout<<temp->data<<"->";
          temp=temp->next;
        }
  }
int main()
{
  node* head = NULL;
  insert_node_at_begin_using_head(head,50);
  insert_node_at_begin_using_head(head,40);
  insert_node_at_begin_using_head(head,30);
  insert_node_at_begin_using_head(head,20);
  insert_node_at_begin_using_head(head,10);
  printLL(head);

  return 0;
}