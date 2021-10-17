#include<iostream>
using namespace std;
int sum(int n){ 
  if(n==0){
    return 0;
  }
   int prev_sum = sum(n-1);
   return n + prev_sum;
}
int main()
{
  int n;
  cin>>n;
  int total_sum =sum(n);
  cout<<total_sum;

  return 0;
}