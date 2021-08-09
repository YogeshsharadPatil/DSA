#include<iostream>
using namespace std;
 int insert(int arr[],int n,int cap,int element,int position){
          
          if(n==cap){
            return n;
          }
          int index = position - 1;
          for(int i = n-1;i>=index;i--){
            arr[i+1]=arr[i];
          }
          arr[index]=element;
          return n+1;
}

int main(){
  int n,position,element,cap;
    int arr[50] ={0};
    cout<<"Enter size of the array"<<endl;
    cin>>n;
    for(int i=0;i<n;++i){
        cout<<"Enter array element"<<endl;
        cin>>arr[i];
    }
    for(int i=0;i<n;++i){
        cout<<arr[i];
        cout<<endl;
    }
    cout<<"Enter the position where element to be adde4d"<<endl;
    cin>>position;
    cout<<"Enter the element to be added at a mentioned position"<<endl;
    cin>>element;
    cout<<"Enter the capacity of the array"<<endl;
    cin>>cap;
    cout<<insert(arr,n,cap,element,position);
    

}