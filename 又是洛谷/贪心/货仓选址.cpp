# include <iostream>
# include <cmath>
# include <algorithm>
using namespace std;
const int N=1e5;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin>>n;
    ll arr[N];
    for(int i=1;i<=n;i++)cin>>arr[i];
    int ans=0;
    sort(arr+1,arr+1+n);
    for(int i=1;i<=n;i++)
    {
        ans+=abs(arr[n/2]-arr[i]);
    }
    cout<<ans<<endl;
    return 0;
}