#include <iostream>
using namespace std;
int getlargest(int arr[], int n)
{
  int res = 0;
  int i;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > arr[res])
    {
      res = i;
    }
  }
  return i;
}
int second_largest(int arr[], int n)
{
  int i;
  int res = -1;
  int larg = getlargest(arr, n);
  for (int i = 0; i < n; i++)
  {
    if (arr[i] != arr[larg])
    {
      if (res == -1)
      {
        res = i;
      }
     else if (arr[i] > arr[res])
      {
        res = i;
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
  cout <<"\n";
  cout << arr[second_largest(arr,n)];
}