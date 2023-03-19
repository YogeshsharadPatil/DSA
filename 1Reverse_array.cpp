#include <iostream>
using namespace std;
 void reverse_array(int arr[],int n){
   int start = 0; 
   int end = n-1;

   while (start<end){
     int temp = arr[start];
     arr[start] = arr[end];
     arr[end] = temp;
     start ++;
     end --;
   }
}
int main(){
    int n = 5;
    int arr[n] = {4,5,6,7,8};
    cout<<"Before reverse"<<endl;
    for (int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    reverse_array(arr,n);
    cout<<"After reverse"<<endl;
    for (int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }


}