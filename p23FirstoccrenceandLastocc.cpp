#include<iostream>
#include<bits\stdc++.h>
using namespace std;
int firstOCC(int arr[],int n,int i,int key)  // i = first we have to give starting index andex after that it increament to check arr[i]==key and return i
{
  if(i==n){
    return -1;
  }
  if(arr[i]==key){
    return i;
  }
  return firstOCC(arr,n,i+1,key);

}
int lastocc(int arr[],int n,int key){
  if(n == 0 ){
    return -1;
  }
  if(arr[n-1]==key){
    return n-1;
  return lastocc(arr,n-1,key);
  }
}
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i= 0;i<n;i++){
    cin>>arr[i];
  }
  int key;
  cin>>key;
  // int findex = firstOCC(arr,n,0,key);
  // cout<<findex;
 int lindex = lastocc(arr,n,key);
 cout<<lindex;

  return 0;
}