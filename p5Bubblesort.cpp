#include <iostream>
using namespace std;
void Bubblesort(int, int);
void Bubblesort(int arr[], int n)
{
  int iteration = 1;
  while (iteration <= n-1)
  {
    for (int i = 0; i < n - iteration; i++)
    {
      if (arr[i] > arr[i + 1])
      {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
      }
    }
    iteration++;
  }
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}
int main()
{
   int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  Bubblesort(arr, n);
  

  return 0;
}