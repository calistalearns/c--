#include <iostream>
#include <string>
#include <cmath>
using namespace std;
string s;
int m=1;
string ss;
bool check(string s)
{
    for(int i=0;i<s.size()/2;i++)
    {
        if(s[i]!=s[s.size()-i-1]) return 0;
    }
    return 1;
}
int main()
{
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        for(int j=i+1;j<s.size();j++)
        {
            ss=s.substr(i,j-i+1);
            if(check(ss)==1)
                m=max(m,j-i+1);
        }
    }
    cout<<m<<endl;
    return 0;
}