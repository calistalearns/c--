#include <iostream>
using namespace std;
int n,s;
typedef long long ll;
const int N=1e6+10;
ll cnt[N],sum,now,ans,p[N],c[N];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>s;//人数，钱数
    for(int i=1;i<=n;i++)
    {
        cin>>p[i]>>c[i];
        cnt[c[i]]+=p[i];//单独训那个次数的要花多少
        now+=p[i];//价钱总和
        sum+=p[i]*c[i];//全部自己搞
    }
    for(int i=1;i<=N;i++)
    {
        if(now<s) break;
            ans+=s;
            sum-=now;
            now-=cnt[i];
    }
    cout<<sum+ans;
    return 0;
}