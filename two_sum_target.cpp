#include<iostream>
using namespace std;
int  two_sum(int nums[],int target,int n){
  int i , j;
    for(int i = 0;i<n;i++)
    {
      bool flag = false;
        for(int j = i+1;j<n;j++)
        {
            if(nums[i] + nums[j] == target)
            {
                return i , j;
            }
        }   
    }
}
int main(){
    int nums[] = {2,7,11,15};
    int target;
     int n = sizeof(nums) / sizeof(nums[0]);
    cout<<"Enter target"<<endl;
    cin>>target;
    cout<<endl;
    cout<<two_sum(nums,target,n);
    
    
}
