#include<iostream>
using namespace std;

void search_element(int arr[],int n,int ele ){
    int i = 0;
    int flag = 0;
    for( i=0;i<n;i++)
    {   
        if(arr[i]==ele){
        flag = 1;
        break;
      }
    }
    if(flag != 1){
      cout<<"element not found"<<endl;
    }
}
int frequency_of_element(int arr[],int n,int ele)
{
  search_element(arr,n,ele );
  int i = 0;
  int count = 0;
  for(i=0;i<n;i++){
    if(arr[i]==ele){
      count++;
    }
  }
    return count;
}
int main()
{
   int n,ele,freq;

   cout<<"Enter size of the array: "<<endl;
   cin>>n;
   int arr[n];
   for (int i=0;i<n;i++){
     cout<<"Enter array element"<<endl;
     cin>>arr[i];
   }cout<<endl;  
   cout<<"Enter Element for checking frequecy: "<<endl;
   cin>>ele;
   freq = frequency_of_element(arr,n,ele);
   cout<<"Frequency of "<<ele<<" is "<<freq<<endl;


   
}