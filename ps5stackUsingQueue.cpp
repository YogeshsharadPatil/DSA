#include<bits\stdc++.h>
#include<queue>
using namespace std;
class stac{
   queue<int>q1;
   queue<int>q2;
   public:
      void push(int x){
        q1.push(x);
        while(!q2.empty()){
          q1.push(q2.front());
          q2.pop();
        }
        swap(q1, q2);
      }
      int pop(){
        int topval = q2.front();
        q2.pop();
        return topval;
      }
};
int main(){
   stac st;
   st.push(0);
   st.push(1);
   st.push(2);
   st.push(3);
   st.push(4);
   cout<<st.pop();
   cout<<st.pop();

   return 0;
   }