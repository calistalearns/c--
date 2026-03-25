#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int n,ans;
string s;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        cin>>n;
        cin>>s;
        int odda=0;
        for(int i=0;i<s.size();i+=2)
        {
            if(s[i]=='A') odda++;
        }
        ans=min(n-odda,odda);
        cout<<ans<<endl;
    }
    return 0;
}