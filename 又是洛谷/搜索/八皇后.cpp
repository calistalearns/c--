# include <iostream>
using namespace std;
int n,ans[15],mark=0,m1[30],m2[30],m3[30];//j,i+j,i-j+N
void setvalue(int x,int y,int k)
{
    ans[x]=y;
    m1[y]=k;
    m2[x+y]=k;
    m3[x-y+n]=k;
}
void dfs(int i)
{
    if(i>n)
    {
        mark++;
        if(mark<=3)
        {
            for(int i=1;i<=n;i++)
            {
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
    }
    for(int j=1;j<=n;j++)
    {
        if(m1[j]||m2[j+i]||m3[i-j+n])continue;
        setvalue(i,j,1);
        dfs(i+1);
        setvalue(i,j,0);
    }
}
int main()
{
    cin>>n;
    dfs(1);
    cout<<mark;
    return 0;
}