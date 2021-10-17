#include<iostream>
using namespace std;
int main()
{

  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int ans_longest_length = 2;
  int pd = arr[1] - arr[0]; // previous common difference
  int current_length = 2;
  int j = 2;
  while (j < n)
  {
    if (pd == arr[j] - arr[j - 1])
    {
      current_length++;
    }
    else
    {
      pd = arr[j] - arr[j - 1];
      current_length = 2;
    }
    ans_longest_length = max(current_length, ans_longest_length);
    j++;
  }
  cout << endl;

  cout << ans_longest_length;
  
  return 0;
}