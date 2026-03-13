#include <iostream>
#include <queue>
using namespace std;

int n,m;
char map[1005][1005];
int ans[1005][1005];
bool vis[1005][1005];
int comp_id[1005][1005];
int comp_cnt,comp_size[1000005];

int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};

void dfs(int x,int y,char color,int id)
{
    if(x<1||x>n||y<1||y>n) return;
    if(vis[x][y]) return;
    if(map[x][y]!=color) return;
    
    vis[x][y]=1;
    comp_id[x][y]=id;
    comp_size[id]++;
    
    for(int i=0;i<4;i++)
    {
        int nx=x+dx[i];
        int ny=y+dy[i];
        char next_color=(color=='0')?'1':'0';
        dfs(nx,ny,next_color,id);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>map[i][j];
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(!vis[i][j])
            {
                comp_cnt++;
                dfs(i,j,map[i][j],comp_cnt);
            }
        }
    }
    
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            ans[i][j]=comp_size[comp_id[i][j]];
    
    while(m--)
    {
        int i,j;
        cin>>i>>j;
        cout<<ans[i][j]<<endl;
    }
    return 0;
}