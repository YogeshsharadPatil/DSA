#include<iostream>
using namespace std;
int main(){
  int n1,n2,mx;
  cin>>n1>>n2;
  mx = max(n1,n2);

   
  while(mx%n1!=0 || mx%n2!=0)
  {
    ++mx;
  }

  cout<<"LCM: "<<mx;
  return 0;
}