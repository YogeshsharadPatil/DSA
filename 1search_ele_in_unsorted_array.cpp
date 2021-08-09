#include <iostream>
using namespace std;
string search(int arr[], int n, int x)
{
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == x)
    {
      return "Found";
    }
  
  }
  return "not Found";
}

int main()
{

  cout << "Enter size of an array: " << endl;
  int n;
  cin >> n;
  int arr[n];
  int x;
  cout << "Enter element to be search: " << endl;
  cin >> x;
  for (int i; i < n; i++)
  {
    cout << "Enter array element " << endl;
    cin >> arr[i];
  }
  for (int i; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << search(arr, n, x)<<endl;
  return 0;
}