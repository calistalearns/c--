#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
int n,x;
ll sum,now,ans;
const int N=1e5+10;
int main()
{
    cin>>n>>x;
    for(int i=1;i<=n;i++)
    {
        int t;cin>>t;
        sum+=t;
        now+=x-t;
        ans=max(now,ans);
        if(now<0)now=0;
    }
    cout<<ans+sum;
    return 0;
}