#include <iostream>
using namespace std;
typedef long long ll;
int main()
{
    ll a,b,n;
    cin>>a>>b>>n;
    ll day_week=a*5+b*2;
    ll week=n/day_week;
    ll remind=n-week*day_week;
    ll ans=week*7;
    for(int i=1;remind>0;i++)
    {
        if(i<=5)
        {
            remind-=a;
            ans++;
        }
        else
        {
            remind-=b;
            ans++;
        }
    }
    cout<<ans;
    return 0;
}