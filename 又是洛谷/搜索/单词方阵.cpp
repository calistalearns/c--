# include <iostream>
# include <string>
using namespace std;
int n,mark[105][105],dx[8]={0,-1,-1,-1,0,1,1,1},dy[8]={-1,-1,0,1,1,1,0,-1};
char a[105][105];
string yz="yizhong";
void dfs(int x,int y)
{
    for(int i=0;i<8;i++)
    {
        int tx,ty,m=1;
        {
            for(int j=0;j<yz.size();j++)
            {
                tx=x+j*dx[i];
                ty=y+j*dy[i];
                if(a[tx][ty]!=yz[j])
                {
                    m=0;
                    break;
                }
            }
        }
        if(!m)continue;
        for(int j=0;j<yz.size();j++)
        {
            mark[x+j*dx[i]][y+j*dy[i]]=1;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            dfs(i,j);
        }
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(mark[i][j])cout<<a[i][j];
            else cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}