# include <iostream>
# include <cmath>
# include <climits>
using namespace std;
int n,ans=INT_MAX,s[15],b[15];
void dfs(int i,int x,int y)
{
    if(i>n)
    {
        if(x==1&&y==0)
        return;
        ans=min(ans,abs(x-y));
        return;
    }
    dfs(i+1,x*s[i],y+b[i]);
    dfs(i+1,x,y);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>s[i]>>b[i];
    }
    dfs(1,1,0);
    cout<<ans<<endl;
    return 0;
}