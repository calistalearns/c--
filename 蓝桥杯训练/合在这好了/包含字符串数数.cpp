#include <iostream>
# include <string>
using namespace std;
int main()
{
  // 请在此输入您的代码
  string s;
  cin>>s;
  int n;
  cin>>n;
  
  for(int i=0;i<n;i++)
  {
    int cnt=0;
    auto pos=0;
    string s1;
    cin>>s1;
    while(1)
    {
      pos=s.find(s1,pos);
      if(pos==string::npos) break;
      cnt++;
      pos+=s1.size();
    }
    cout<<cnt<<endl;
  }
  return 0;
}