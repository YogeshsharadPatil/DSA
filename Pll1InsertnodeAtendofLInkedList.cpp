#include<bits\stdc++.h>
using namespace std;
class Node
{ public:
        int data;
        Node* next;
        Node(int val){
          data = val;
          next = NULL;
        }
};
  void insertatTail(Node* &head,int val){
   
   Node* n = new Node(val);

    if(head == NULL){
      head =n;
      //n->next = NULL;
      return;
    }
     Node* temp = head;
     while(temp->next != NULL){
         temp=temp->next;
     }
     temp->next = n;
  }
   void printLL(Node* head){
        Node* temp = head;
        while(temp!= NULL){
          cout<<temp->data<<"->";
          temp=temp->next;
        }
   }

int main(){
  Node* head = NULL;
 
  insertatTail(head,10);
  insertatTail(head,20);
  printLL(head);


  return 0;
}