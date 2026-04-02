#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
typedef long long ll;
const int N=1e5+10;
ll n,m,a[N],ans=LLONG_MAX;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>m;//画总数，位置
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+1+n);
    for(int i=1;i<=n-m+1;i++)
    {
        ll diff=a[i+m-1]*a[i+m-1]-a[i]*a[i];
        ans=min(diff,ans);
    }
    cout<<ans;
    return 0;
}