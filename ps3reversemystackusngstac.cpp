#include<iostream>
#include<stack>
using namespace std;

int main(){
  stack<int>s;
  stack<int>rev_s;
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
  s.push(5);
  cout<<"Original stack"<<endl;
  while(!s.empty()){
    cout<<s.top()<<" ";
    rev_s.push(s.top());
    s.pop();
  }cout<<endl;
 
 cout<<"Reverse stack: "<<endl;

  while(!rev_s.empty()){
    cout<<rev_s.top()<<" ";
    rev_s.pop();
  }cout<<endl;





return 0;
}