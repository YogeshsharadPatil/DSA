#include<iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i = 0;i<n;i++)
  {
    cin>>arr[i];
  }
  int till;
  cin>>till;
  int maxno = INT_MIN;
  for(int i= 0; i<=till;i++)
  {
      maxno = max(maxno,arr[i]);
  }
  cout<<endl;

  cout<<maxno;

return 0;
}