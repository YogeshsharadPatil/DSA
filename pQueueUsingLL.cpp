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
class queue
{
private:
  node *front;
  node *back;

public:
  queue()
  {
    front = NULL;
    back = NULL;
  }
  void enqueue(int x)
  {
    node *n = new node(x);
    if (front == NULL)
    {
      back = n;
      front = n;
    }
    back->next = n;
    back = n;
  }
  void dequeue()
  {
    if (front == NULL)
    {
      cout << "No ele to del" << endl;
      return;
    }
    node *nodetodel = front;
    front = front->next;
    delete nodetodel;
  }
    int peek()
    {
      if (front == NULL)
      {
        cout << "No ele to del" << endl;
      
      }

      return front->data;
    }
    bool empty()
    {
      if (front == NULL)
      {
        return true;
      }
      return false;
    }
  };

  int main()
  {
    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    cout << q.peek() << endl;
    q.dequeue();

    return 0;
  }