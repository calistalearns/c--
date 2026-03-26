#include <iostream>
using namespace std;
const int N=1e5+10;
typedef long long ll;
int n,k,cnt[N];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>k;
    ll ans=0,sum=0;
    cnt[0]=1;
    for(int i=1;i<=n;i++)
    {
        int x;cin>>x;
        sum=(sum+x)%k;
        ans+=cnt[sum];
        cnt[sum]++;
    }
    cout<<ans<<endl;
    return 0;
}