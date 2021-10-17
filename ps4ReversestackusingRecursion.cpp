#include<bits\stdc++.h>
#include<stack>
using namespace std;
void insertatbottom(stack<int>&st,int ele){
  if(st.empty()){
    st.push(ele);
    return;
  }
   int topele = st.top();
   st.pop();
   insertatbottom(st,ele);
   
   st.push(topele);

   
}

 void Reversestack(stack<int>&st)
{
   if(st.empty()){
     return;
   }

   int ele = st.top();
   st.pop();
   Reversestack(st);
   insertatbottom(st,ele);

}
int main(){
  stack<int>st;
  st.push(4);
  st.push(3);
  st.push(2);
  st.push(1);
  Reversestack(st);
  while(!st.empty())
{
  cout<<st.top()<<" ";
  st.pop();
}
  return 0;
}