#include <iostream>
#include <climits>
using namespace std;
int a[5][5],ans=INT_MAX,vis[10];
int dx[]={0,0,1,-1,0};
int dy[]={1,-1,0,0,0};
bool check()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(!a[i][j]) return 0;
        }
    }
    return 1;
}

void c(int x,int y)
{
    for(int i=0;i<5;i++)
    {
        int xx=x+dx[i];
        int yy=y+dy[i];
        if(xx>=0&&xx<3&&yy>=0&&yy<3)
        {
            a[xx][yy]=1-a[xx][yy];
        }
    }
}

void dfs(int pos,int cnt)
{
    if(ans<=cnt) return;
    if(pos>=9)
    {
        if(check()) ans=cnt;
        return;
    }
    int x=pos/3;
    int y=pos%3;
    dfs(pos+1,cnt);//不点

    c(x,y);
    dfs(pos+1,cnt+1);//点
    c(x,y);
}

int main()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    dfs(0,0);
    cout<<ans;
    return 0;
}