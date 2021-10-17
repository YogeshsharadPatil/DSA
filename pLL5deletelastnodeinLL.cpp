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
node *deletelastNode(node *head)
{

  if (head == NULL)
  {
    return head;
  }
  else if (head->next == NULL)//if first node is present
  { 
    head = NULL;
    return head;
  }
  else
  {
    node *temp = head;
    while (temp->next->next != NULL)
    {
      temp = temp->next;
    }
    node *temp1 = temp->next;
    temp->next = NULL;
    free(temp1);
    
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
  head = deletelastNode(head);
  showLL(head);
  return 0;
}