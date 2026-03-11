# include <iostream>
# include <cstring>
# include <queue>
using namespace std;
int n,m,x,y,step[410][410],used[410][410];
queue<pair<int,int>>q;
int dx[8]={1,2,2,1,-1,-2,-2,-1};
int dy[8]={2,1,-1,-2,-2,-1,1,2};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    memset(step,-1,sizeof(step));
    cin>>n>>m>>x>>y;
    step[x][y]=0,used[x][y]=1,q.push({x,y});
    while(!q.empty())
    {
        int xx=q.front().first,yy=q.front().second;q.pop();
        for(int i=0;i<8;i++)
        {
            int a=xx+dx[i],b=yy+dy[i];
            if(a<1||a>n||b<1||b>m||used[a][b]) continue;
            used[a][b]=1;
            q.push({a,b});
            step[a][b]=step[xx][yy]+1;
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout<<step[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}