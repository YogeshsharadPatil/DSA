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
void showLL(node *head)
{
  node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout<<"NULL"<<endl;
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
  showLL(head);
  return 0;
}