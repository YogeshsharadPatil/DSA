#include<iostream>
using namespace std;

void sort012(int arr[],int n)
{
      int count0= 0, count1 = 0, count2= 0;
      int i;
      //getting the count
      for (i= 0;i<n;i++)
      {
        if(arr[i] == 0)
        {
          count0++;
        }
        if(arr[i] == 1)
        {
          count1++; 
        }
        if(arr[i] == 2)
        {
          count2++;
        }
      }
        // placing the values of 0
      for(i= 0;i<count0;i++)
      {
        arr[i] = 0;
      }
      //placing the values of ones
      for(i=count0;i<(count0 + count1);i++)
      {
        arr[i] = 1;
      }
      for(i=(count0+count1);i<n;i++)
      {
        arr[i] = 2;
      }
      return;
}


int main()
{
  int n;
  int arr[] = {0,2,1,1,2,0};
  n = sizeof(arr) / sizeof(arr[0]);
  cout<<"original array"<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  sort012(arr,n);
  
  cout<<"Modified array"<<endl;
   for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }

}