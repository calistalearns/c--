# include <iostream>
using namespace std;
int n,k,ans=0,sum=0;
void dfs(int pos,int begin)
{
    if(pos==k)
    {
        if(sum==n) ans++;
        return;
    }
    for(int i=begin;i<=n;i++)
    {
        if(sum+(k-pos)*i>n) return;
        sum+=i;
        dfs(pos+1,i);
        sum-=i;
    }
}
int main()
{
    cin>>n>>k;
    dfs(0,1);
    cout<<ans;
    return 0;
}