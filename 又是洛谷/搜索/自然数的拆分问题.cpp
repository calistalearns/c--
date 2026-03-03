# include <iostream>
using namespace std;
int n,a[10];
void dfs(int s,int step)
{
    if(s==0)
    {
        for(int i=0;i<step-1;i++)cout<<a[i]<<"+";
        cout<<a[step-1]<<endl;
    }
    for(int i=1;i<=s;i++)
    {
        if(i<a[step-1])continue;
        a[step]=i;
        dfs(s-i,step+1);
    }
}
int main()
{
    cin>>n;
    for(int i=1;i<=n/2;i++)
    {
        a[0]=i;
        dfs(n-i,1);
    }
    return 0;
}