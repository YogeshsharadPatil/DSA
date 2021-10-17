#include<iostream>
#include<bits\stdc++.h>
using namespace std;

void dec(int n){
  if(n == 1){
     cout<<"1"<<endl;
     return;
  }
  cout<<n<<" "<<endl;
  dec(n-1);
}
void Inc(int n){
  if(n == 1){
     cout<<"1"<<endl; 
     return;
  }
  
  Inc(n-1);
  cout<<n<<" "<<endl;
}
int main()
{
  int n;
  cin>>n;

  dec(n);
   Inc(n);
  return 0;
}