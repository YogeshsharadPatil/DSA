#include <iostream>
using namespace std;
void leaders_in_array(int arr[], int n)
{
  int i, j;

  for (i = 0; i < n; i++)
  {
    bool flag = false;
    for (j = i + 1; j < n; j++)
    {
      if (arr[i] <= arr[j])//if the element to its right is greater than this i'th element then not  leader
      {
        flag = true;
        break;
      }
    }
    if (flag == false)
    {
      cout << arr[i] << " ";
    }
  }
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
  cout << "\n";
  cout << "Leaders in an array are " << endl;
  leaders_in_array(arr, n);
}