#include<iostream>
using namespace std;
class node{
  public:
  int data;
  node* next;
  node(int val){
    data = val;
    next=NULL;
  }
};

 node* reverseKnode(node* &head,int k){
   node* preptr=NULL;
   node* currptr = head;
   node* nextptr;
   int count = 0;
   while(currptr!= NULL && count<k){
     nextptr=currptr->next;
     currptr->next = preptr;
     preptr= currptr;
     currptr= nextptr;
     count++;
   }
    if(nextptr!=NULL){
    head->next=reverseKnode(nextptr,k); 
    }
    return preptr;
 }

void showdata(node* head){
  node* temp = head;
  while(temp!=NULL){
    cout<<temp->data<<"->";
    temp = temp->next;
  }
  cout<<"NULL";
}


int main(){
  node* head=NULL;
  node* n1= new node(10);
  node* n2= new node(20);
  node* n3= new node(30);
  node* n4= new node(40);
  node* n5= new node(50);
  node* n6= new node(60);
  head=n1;
  n1->next = n2;
  n2->next= n3;
  n3->next = n4;
  n4->next = n5;
  n5->next = n6;
  n6->next = NULL;
  showdata(head);
  int k = 2;
  node* nhead=reverseKnode(head,k);
  cout<<endl;
  showdata(nhead);

  return 0;
}