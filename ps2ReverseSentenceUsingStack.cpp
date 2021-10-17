#include<iostream>
#include<stack>
using namespace std;
void ReverseSentence(string s)
{
  stack<string>st;
  for(int i = 0; i<s.length(); i++){
    string word="";
    while(s[i]!=' ' && i<s.length()){ 
      word+=s[i];
      i++;
    }
    st.push(word);
  }
  while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop(); 
  }cout<<endl;

}
int main(){
  //create a stack using Stl stack<dtatype>Variable
  string str= "Hey, Yogesh you are very hardworrkng";
  cout<<str<<endl;
  ReverseSentence(str);
return 0;
}