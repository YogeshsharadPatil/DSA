#include<bits\stdc++.h>
using namespace std;
void replacepi(string s){
   if(s.length() == 0){
     return;
   }
   if(s[0] == 'p' && s[1]=='i'){
     cout<<"3.14";
     replacepi(s.substr(2));
   }
   else{
     cout<<s[0];
     replacepi(s.substr(1));
   }

  
}
int main(){
  string str;
  getline(cin,str);
  replacepi(str);
  cout<<endl;
  return 0;
}