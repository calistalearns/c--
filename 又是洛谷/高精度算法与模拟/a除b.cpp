# include <iostream>
# include <string>
using namespace std;
const int N=1e5;
int a[N],b,c[N];
int la,lc;
void div(int a[],int b,int c[])
{
    long long t=0;
    for(int i=la-1;i>=0;i--)
    {
        t=t*10+a[i];
        c[i]=t/b;
        t%=b;
    }
    while(lc>1&&c[lc-1]==0)lc--;
}
int main()
{
    string s;
    cin>>s>>b;
    la=s.size(),lc=la;
    for(int i=0;i<s.size();i++) a[la-i-1]=s[i]-'0';//我靠！！！！！怎么每次哦度忘记
    div(a,b,c);
    for(int i=lc-1;i>=0;i--)cout<<c[i];
    return 0;
}