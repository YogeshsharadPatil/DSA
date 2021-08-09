# include<iostream>
using namespace std;
int Second_largest(int arr[],int n){
      int res=-1;
      int largest = 0;
      for(int i=0;i<n;i++){
          if(arr[i]>arr[largest]){
            res = largest;
            largest = i;
            }
          else if(arr[i]!=arr[largest]){
            if(res==-1){
              res = 0;
            }
            else{
              if(arr[i]>arr[res]){
                res = i;
              }
            }
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
  cout << endl;
  cout<<"Second largest element is: "<<arr[Second_largest(arr,n)];
}