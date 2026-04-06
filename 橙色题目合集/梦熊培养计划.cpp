#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
const int N=1e5+10;
int n,m;
struct S
{
    string name;
    int a[25];
    double ave,o;
}s[N];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>s[i].name;
        
        for(int j=1;j<=m;j++)
        {
            cin>>s[i].a[j];
           s[i].ave+=s[i].a[j];
        }
        s[i].ave/=m;
        for(int j=1;j<=m;j++)
        {
            s[i].o+=(s[i].a[j]-s[i].ave)*(s[i].a[j]-s[i].ave);
        }
        s[i].o/=m;
    }

    sort(s+1,s+1+n,[](const S & a,const S  &b)
    {
        if(a.o!=b.o)
        return a.o>b.o;
        else
        return a.name<b.name;
    });

    if(n<=20)
    for(int i=1;i<=n;i++)
    {
        cout<<s[i].name<<endl;
    }
    else
    for(int i=1;i<=20;i++)
    {
        cout<<s[i].name<<endl;
    }
    return 0;
}