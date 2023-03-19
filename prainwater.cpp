#include <bits\stdc++.h>
using namespace std;

int rainwater(int a[],int n)
{
  int left[n];
  int right[n];
  left[0] = a[0];
  for (int i = 0; i < n; i++)
  {
    left[i] = max(left[i - 1], a[i]);
  }

  right[n - 1] = a[n - 1];
  for (int i = n - 2; i >= 0; i--)
  {
    right[i] = max(right[i + 1], a[i]);
  }
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    ans += min(left[i], right[i]) - a[i];
  }
  return ans;
}

int main()
{
  int n = 4;
  int a[4] = {7,4,0,9};
  cout << rainwater(a,n);

  return 0;
}