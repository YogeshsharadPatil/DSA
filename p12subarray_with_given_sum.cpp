#include<iostream>
using namespace std;
int main(){
  int n, s;
 cin>>n>>s;
  int arr[n];
  for(int i = 0;i<n;i++)
  {
    cin>>arr[i];
  }
 
  int i = 0, j =0, st = -1, en = -1;
  int sum = 0;
  while(j<n && sum + arr[j] <=s )
   {
      sum += arr[j];
      j++; 
   }
   if(sum == s){
     cout<<"sum is in between "<<i+1<<" and " <<j;
     return 0;
   }

   while(j<n){
     sum  += arr[j];
     if(sum>s){
       sum = sum - arr[i];
       i++;
     } 
     if(sum == s){
       st = i + 1;
       en = j + 1;
     }
     j++;
   }
   cout<<"sum is in between "<<st<<" and "<<en<<endl;
  return 0;
}









// //brute force approach by i.e. by myself
// #include <iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cin >> n;
//   int arr[n];
//   for (int i = 0; i < n; i++)
//   {
//     cin >> arr[i];
//   }
//   int given_sum;
//   cin >> given_sum;
//   int flag = 0;
//   for (int i = 0; i < n; i++)
//   {
//     int sum = 0;
//     for (int j = i; j < n; j++)
//     {
//       sum = sum + arr[j];
//       if (sum == given_sum)
//       {
//         for (int k = i; k <= j; k++)
//         {
//           cout << arr[k] << " ";
//         }
//         flag = 1;
//         break;
//       }
//     }
//     if (flag == 1)
//     {
//       break;
//     }
//   }

//   return 0;
// }