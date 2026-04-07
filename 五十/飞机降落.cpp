#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int n,vis[15];
struct F
{
    int t,d,l;
}f[15];

bool dfs(int then,int now)
{
    if(then>=n) return 1;
    for(int i=1;i<=n;i++)
    {
        if(vis[i]||f[i].t+f[i].d<now)//等不及
        continue;
        vis[i]=1;
        int start=max(now,f[i].t);//可能的最早时间
        int end=start+f[i].l;
        if(dfs(then+1,end)) return 1;
        vis[i]=0;
    }
    return 0;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;cin>>T;
    while(T--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>f[i].t>>f[i].d>>f[i].l;
        }
        memset(vis,0,sizeof(vis));
        if(dfs(0,0)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}