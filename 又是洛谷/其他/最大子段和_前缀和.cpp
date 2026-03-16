# include <iostream>
# include <cmath>
# include <climits>
using namespace std;
const int N=1e6;
long long n,a[N],f[N];
long long p=-INT_MIN,t=0;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i],f[i]=f[i-1]+a[i];

    for(int i=1;i<=n;i++)
    {
        p=max(p,f[i]-t);
        t=min(t,f[i]);
    }
    cout<<p<<endl;
    return 0;
}