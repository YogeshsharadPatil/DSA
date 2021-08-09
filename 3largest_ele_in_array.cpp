#include<iostream>
using namespace std;
int largest(int arr[],int n){
int res=0;
for(int i=0;i<n;i++){
    if(arr[i]>arr[res]){
      res = i;
    }

}
    return res;

}

int main()
{
cout << "Enter size of an array: " << endl;
  int n;
  cin >> n;
  int arr[n];
  for (int i; i < n; i++)
  {
    cout << "Enter array element " << endl;
    cin >> arr[i];
  }
  for (int i; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout<<"\n";
  cout << arr[largest(arr,n)];
}