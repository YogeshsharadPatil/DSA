#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int arr[n + 1];
  arr[n] = -1;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int mx = -1;
  int no_of_r_breaking_days = 0;
  if (n == 1)
  {
    return 0;
  }

  for (int i = 0; i < n; i++)
  {
    if (arr[i] > mx && arr[i] > arr[i + 1])
    {  

      no_of_r_breaking_days++;
      cout<<arr[i]<<endl;
    }
    mx = max(arr[i], mx);
  } cout<<endl;
   cout<<"no_of_r_breaking_days "<<no_of_r_breaking_days <<endl;
  return 0;
}