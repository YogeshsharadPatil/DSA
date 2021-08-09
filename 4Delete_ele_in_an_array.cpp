#include<iostream>
using namespace std;
int delete_element(int arr[],int n,int element_to_delete){
      int i;
      //check element is present or not
      for(int i=0;i<n;i++){
          if(arr[i]==element_to_delete){
            break;
          }
      }
      if(i==n){  //element is not present
        return n;
      }
      // shift the i+1 element at i till at index of the deleted element
      for(int j=i;j<n;j++){
        arr[j]=arr[j+1];
      }
      return n-1;// if number is deleted then it will return one size less than the original size
      }




int main()
{
  int n,element_to_delete;
   cout <<"Enter size of the array"<<endl;
   cin>>n;
   int arr[n];
   for (int i=0;i<n;i++){
      cout << "Enter array element"<<endl;
      cin>>arr[i];
   }
   for(int i=0;i<n;i++){
     cout<<arr[i]<<" ";
   }
  cout<<"Enter element to be delete"<<endl;
  cin>>element_to_delete;

  cout<<delete_element(arr,n,element_to_delete);

}