#include <bits\stdc++.h>
using namespace std;
#define n 1000

class Stack
{
  int top;

public:
   // Maximum size of Stack

  Stack() { top = -1; }
  int arr[n];
  void push(int x)
  {
    if (top == n - 1)
    {
      cout << "stack is overflow" << endl;
      return;
    }
    top++;
    arr[top] = x;
  }
  int pop()
  {
    if (top == -1)
    {
      cout << "stack is empty no element to pop" << endl;
    }
    top--;
  }
  int peek()
  {
    return arr[top];
  }

  bool isempty()
  {
    return top == -1;
  }
};
int main()
{
  Stack st;
  st.push(0);
  st.push(1);
  st.push(2);
  cout<<st.peek()<<" ";

  return 0;
}