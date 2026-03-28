#include <iostream>
#include <algorithm>
using namespace std;
int n,m,dp[30][30005];
struct A
{
    int v,p,all;
}a[30];
int main()
{
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>a[i].v>>a[i].p;
        a[i].all=a[i].v*a[i].p;
    }
    
    for(int i=1;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            dp[i][j]=dp[i-1][j];
            if(j>=a[i].v)
            dp[i][j]=max(dp[i][j],dp[i-1][j-a[i].v]+a[i].all);
        }
    }
    cout<<dp[m][n]<<endl;
    return 0;
}