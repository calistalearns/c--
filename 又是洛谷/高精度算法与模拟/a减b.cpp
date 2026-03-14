# include <iostream>
# include <string>
using namespace std;
const int N=1e5;
int a[N],b[N],c[N];
int lb,la,lc;
bool cmp(string &s1,string &s2)
{
    if(s1.size()!=s2.size()) return s1.size()<s2.size();
    else return s1<s2;
}
void sub(int a[],int b[],int c[])
{
    for(int i=0;i<lc;i++)
    {
        c[i]+=a[i]-b[i];
        if(c[i]<0)
        {
            c[i+1]-=1;
            c[i]+=10;
        }
    }
    while(lc>1&&c[lc]==0)lc--;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s1,s2;
    cin>>s1>>s2;
    if(cmp(s1,s2))//s1小
    {
        swap(s1,s2);
        cout<<"-";
    }
    la=s1.size(),lb=s2.size(),lc=max(la,lb);
    for(int i=0;i<la;i++) a[la-1-i]=s1[i]-'0';
    for(int i=0;i<lb;i++) b[lb-1-i]=s2[i]-'0';

    sub(a,b,c);
    for(int i=lc-1;i>=0;i--) cout<<c[i];
    return 0;
}