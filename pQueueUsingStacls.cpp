#include <bits/stdc++.h>
using namespace std;
class que
{
  stack<int> s1;
  stack<int> s2;

public:
  void enqueue(int x)
  {
    s1.push(x);
  }
  int dequeue()
  {
    if (s1.empty() and s2.empty())
    {
      cout << "No element to delete";
    }
    if (s2.empty())
    {
      while (!s1.empty())
      {
        s2.push(s1.top());
        s1.pop();
      }
    }
    int topele = s2.top();
    s2.pop();
    return topele;
  }
};
int main()
{
  que q;
  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);
  q.enqueue(4);
 cout<< q.dequeue();
 cout<<endl;
  cout<<q.dequeue();

  return 0;
}