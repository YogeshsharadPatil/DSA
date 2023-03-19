#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void reverse(int arr[], int n)
{
  int low = 0, high = n - 1;

  while (low < high)
  {
    int temp = arr[low];

    arr[low] = arr[high];

    arr[high] = temp;

    low++;
    high--;
  }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    int arr[n] = {0} ;
    cout<<"Enter size of the array"<<endl;
    cin>>n;
    for(int i=0;i<n;++i){
        cout<<"Enter array element"<<endl;
        cin>>arr[i];
    }
    cout<<"Array elements  before reversee"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    cout<<"After reverse "<<endl;
    reverse(arr,n);
   for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
    
    return 0;
}
