#include <iostream>
using namespace std;
typedef long long ll;
ll x,y;
int main()
{
    cin>>x>>y;
    ll ans=0;
    while(x&&y)
    {
        if(x>y) swap(x,y);
        ll k=y/x;
        ans+=x*4*k;
        y%=x;
    }
    cout<<ans<<endl;
    return 0;
}