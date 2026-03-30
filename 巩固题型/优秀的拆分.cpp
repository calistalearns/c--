#include <iostream>
using namespace std;
int n,ans=-1,a[30],idx;
void change (int n)
{
    int res=0;
    while(n)
    {
        if(n&1) a[res]=1<<res;
        res++;
        n>>=1;
    }
    idx=res;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    if(n%2!=0||n==0)
    {
        cout<<ans;
        return 0;
    }
    change(n);
    for(int i=idx-1;i>=1;i--)
    {
        if(a[i]!=0)
        {
            cout<<a[i]<<" ";
        }
    }
    return 0;
}