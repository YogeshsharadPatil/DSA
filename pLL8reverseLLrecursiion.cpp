#include <iostream>
using namespace std;
class node
{
public:
  int data;
  node *next;
  node(int val)
  {
    data = val;
    next = NULL;
  }
};
node *reverseLLRecursion(node *&head)
{
  if(head == NULL || head->next==NULL){
    return head;
  }
  node *nhead =reverseLLRecursion(head->next);
  head->next->next = head;
  head->next = NULL;
  return nhead;
}

void showdata(node *head)
{
  node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}
int main()
{
  node *head = NULL;
  node *n1 = new node(10);
  node *n2 = new node(20);
  node *n3 = new node(30);
  node *n4 = new node(40);
  node *n5 = new node(50);
  head = n1;
  n1->next = n2;
  n2->next = n3;
  n3->next = n4;
  n4->next = n5;
  n5->next = NULL;
  showdata(head);
  cout << endl;
  node* nhead = reverseLLRecursion(head);
  showdata(nhead);
  return 0;
}