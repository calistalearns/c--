# include <iostream>
using namespace std;
typedef long long ll;
int n,k,a[25];
int ans=0;
bool prime(int x)
{
    if(x<=1)return 0;
    if(x==2)return 1;
    if(x%2==0)return 0;
    for(int i=3;i*i<=x;i+=2)
    {
        if(x%i==0)return 0;
    }
    return 1;
}
void dfs(int dex,int s,int nest)
{
    if(dex==k)
    {
        if(prime(s))
        ans++;
        return;
    }
    for(int i=nest;i<n;i++)
    {
        dfs(dex+1,s+a[i],i+1);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    dfs(0,0,0);
    cout<<ans<<endl;
    return 0;
}