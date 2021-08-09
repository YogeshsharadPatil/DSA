#include <iostream>
#include <cmath>
using namespace std;
int maxdiffrence(int arr[], int n)
{
  int diff = arr[1] - arr[0];
  for (int i = 0; i < n - 1; i++)
  {
     for(int j= i+1; j<n; j++){
          diff = max(diff, arr[j]-arr[i]);
     } 
  }
  return diff;
}
int main()
{
  int n = 5;
  int arr[] = {1, 2, 3, 4, 5};
  cout << maxdiffrence(arr,n);
}
