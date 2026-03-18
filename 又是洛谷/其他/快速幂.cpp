# include <iostream>
using namespace std;
typedef long long ll;
ll a,b,p;
ll bz(ll a,ll b,ll p)
{
    ll ans=1;
    while(b)
    {
        if(b&1) ans=ans*a%p;
        a=a*a%p;
        b>>=1;
    }
    return ans;
}
int main()
{
    cin>>a>>b>>p;
    cout<<a<<"^"<<b<<""<<"mod"<<" "<<p<<"="<<bz(a,b,p);
    return 0;
}
