#include <iostream>
#include <cmath>
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
int main()
{
  int n = 5;
  int arr[] = {1, 2, 3, 4, 5};
  cout << "Original array " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  reverse(arr, n);
  cout << endl;
  cout << "After reverse " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}