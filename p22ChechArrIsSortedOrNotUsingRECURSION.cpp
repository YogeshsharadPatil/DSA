#include<iostream>
#include<bits\stdc++.h>
using namespace std;
// bool sorted(int arr[],int n){
//   if(n==1){
//     return true;
//   }
//   bool restarr = sorted(arr+1,n-1);
//   return (arr[0]<arr[1] && restarr);
// }
bool checkarr(int arr[],int n){
  if(n==1){
    return 1;
  }
  if(arr[n-1]>arr[n-2]){
    return checkarr(arr,n-1);
  }
  else {
    return 0;
  }
}

int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i = 0;i<n;i++){
    cin>>arr[i];
  }cout<<endl;
  // bool sortornot = sorted(arr,n);
  // cout<<sortornot;
  bool sortedornot = checkarr(arr,n);
  cout<<sortedornot;
  return 0;
}