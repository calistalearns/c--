#include <iostream>
#include <climits>
#include <cstring>
using namespace std;
int n,a,b,arr[205],ans=INT_MAX;
int dis[205];
void dfs(int step,int minn)
{
    if(minn>=ans) return;
    dis[step]=minn;
    if(step==b)
    {
        ans=min(ans,minn);
        return;
    }

    int up=step+arr[step];
    if(up>=1&&up<=n&&minn+1<dis[up])
    dfs(up,minn+1);

    int down=step-arr[step];
    if(down>=1&&down<=n&&minn+1<dis[down])
    dfs(down,minn+1);

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>a>>b;
    memset(dis,0x3f,sizeof(dis));
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    int step=a;
    dfs(step,0);
    if(ans==INT_MAX) cout<<-1<<endl;
    else cout<<ans<<endl;
    return 0;
}