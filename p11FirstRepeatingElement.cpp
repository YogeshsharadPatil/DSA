#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int arr[n];
  int flag =0;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = i+1; j < n; j++)
    {
      if (arr[i] == arr[j])
          {
            cout << arr[i];
            flag = 1;
            break;
          }
    }
    if(flag == 1){
      break;
    }
  }
  

  return 0;
}