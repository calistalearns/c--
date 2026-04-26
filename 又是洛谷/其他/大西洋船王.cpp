#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
typedef long long ll;
int n,m,k;//任务，船数，花费
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>m>>k;
    ll ans=0;
    for(int i=1;i<=n;i++)
    {
        ll sum=LLONG_MIN;
        for(int j=1;j<=m;j++)
        {
            ll x;cin>>x;
            sum=max(sum,x-1LL*j*k);
        }
        ans+=sum;
    }
    cout<<ans<<endl;
    return 0;
}