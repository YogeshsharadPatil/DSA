#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
  string s = "5 6 8 2 4";

  // reverse(s.begin(),s.end());
  // cout<<s;

  // or

  sort(s.begin(), s.end(), greater<int>());
  cout << s << endl;

  return 0;
}