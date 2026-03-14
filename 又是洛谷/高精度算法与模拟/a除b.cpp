# include <iostream>
# include <string>
using namespace std;
const int N=1e5;
int a[N],b,c[N],t=0;
int la,lb,lc;
void div(int a[],int b,int c[])
{
    
}
int main()
{
    string s;
    cin>>s>>b;
    la=s.size(),lc=la;
    for(int i=0;i<s.size();i++) a[la-i-1]=s[i];
    div(a,b,c);
    for(int i=lc-1;i>0;i--)cout<<c[i];
    return 0;
}