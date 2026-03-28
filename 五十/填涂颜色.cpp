#include <iostream>
#include <cstring>
using namespace std;
int n,a[35][35];
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
bool vis[35][35]={0};
void dfs(int i,int j)
{
    if(i<0||i>n+1||j<0||j>n+1||vis[i][j]||a[i][j]==1) return;
    vis[i][j]=1;
    for(int k=0;k<4;k++) dfs(i+dx[k],j+dy[k]);
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    dfs(0,0);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(!vis[i][j]&&a[i][j]==0)
            cout<<2<<" ";
            else
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}