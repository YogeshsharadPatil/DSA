#include <bits/stdc++.h>
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
node *insertafterNode(node* &head, int pos, int val)
{
  node *temp = head;
  if (pos < 0)
  {
    cout << "Can not Insert node" << endl;
  }
  for (int i = 1; i < pos; i++)
  {
    temp = temp->next;
    if (temp->next == NULL)
    {
      cout << "Can not insert node" << endl;
    }
  }
  node *curr = new node(val);
  curr->next = temp->next;
  temp->next = curr;
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
  node *n3 = new node(40);
  node *n4 = new node(50);
  head = n1;
  n1->next = n2;
  n2->next = n3;
  n3->next = n4;
  n4->next = NULL;
  cout<<endl;
  cout << "Before Insertion" <<endl;
  showLL(head);
  cout<<endl;
  cout << "After Insertion" << endl;
  head = insertafterNode(head, 2, 30);
  showLL(head);

  return 0;
}