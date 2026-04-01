#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;cin>>T;
    while(T--)
    {
        ll a,b,c,k;
        cin>>a>>b>>c>>k;
        while(k--)
        {
            ll a1=a,b1=b,c1=c;
            a=floor((b1+c1)/2);
            b=floor((c1+a1)/2);
            c=floor((a1+b1)/2);
            if(a==a1&&b==b1&&c==c1)break;
        }
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    return 0;
}