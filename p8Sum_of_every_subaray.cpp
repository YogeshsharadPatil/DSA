#include <iostream>
using namespace std;
void sum_of_every_subarray(int, int);
void sum_of_every_subarray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    int sum = 0;
    for (int j = i; j < n; j++)
    {
      sum = arr[j] + sum;
      cout << sum << endl;
    }
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
  sum_of_every_subarray(arr, n);

  return 0;
}