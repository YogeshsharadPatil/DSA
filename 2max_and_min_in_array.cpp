#include <iostream>
using namespace std;
int max_ele(int arr[],int n){
     int max_val = arr[0];
     for (int i= 0;i<n;i++){
          max_val = max(max_val,arr[i]);
     }
     return max_val;
}
int min_ele(int arr[],int n){
     int min_val = arr[0];
     for (int i= 0;i<n;i++){
          min_val = min(min_val,arr[i]);
     }
     return min_val;
}


int main(){
  int n = 5;
  int arr[n] = {4,5,6,7,8};
  cout <<"maximum element in array is: \n"<<max_ele(arr,n)<<endl;
  cout <<"minimum element in array is: \n"<<min_ele(arr,n);
}