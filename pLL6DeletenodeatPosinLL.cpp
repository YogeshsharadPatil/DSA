#include <bits\stdc++.h>
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
node* deleteNodeAtPos(node *head,int pos)
{

  if (head == NULL)
  {
    return head;
  }
  else{
    node* temp = head;
    for(int i = 0;i<pos-1;i++){
      temp = temp->next;
    }
    node* nodetodel = temp->next;
    temp->next = nodetodel->next;
    nodetodel = NULL;
    free(nodetodel);
  }
  return head;
}
void showLL(node *head)
{
  node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << "->";
    temp = temp->next;
  }
}
int main()
{
  node *head = NULL;
  node *n1 = new node(10);
  node *n2 = new node(20);
  node *n3 = new node(30);
  head = n1;
  n1->next = n2;
  n2->next = n3;
  n3->next = NULL;
  cout << endl;
  cout << "Before Deletion" << endl;
  showLL(head);
  cout << endl;
  cout << "After Deletion" << endl;
  head = deleteNodeAtPos(head,2);
  showLL(head);
  return 0;
}