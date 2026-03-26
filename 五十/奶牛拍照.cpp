#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
const int N=5e4+10;
int n,ans,l[7],r[7]={0},s;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    memset(l,-1,sizeof(l));
    l[0]=0;
    for(int i=1;i<=n;i++)
    {
        int a;cin>>a;
        s=(s+a)%7;
        if(l[s]==-1) l[s]=i;
        r[s]=i;
    }
    for(int i=0;i<7;i++)
    {
        if(l[i]!=-1)
        ans=max(ans,r[i]-l[i]);
    }
    cout<<ans<<endl;
    return 0;
}