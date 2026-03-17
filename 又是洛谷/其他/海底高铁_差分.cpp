# include <iostream>
# include <cmath>
using namespace std;
typedef long long ll;
const int N=1e6;
int n,m;
ll f[N];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>m;
    int x; cin>>x;
    for(int i=2;i<=m;i++)
    {
        int y;cin>>y;
        if(y>x) f[y]--,f[x]++;
        else if(x>y) f[y]++,f[x]--;
        x=y;
    }
    for(int i=1;i<=n;i++) f[i]+=f[i-1];
    ll result=0;
    for(int i=1;i<=n;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        result+=min(a*f[i],c+b*f[i]);
    }
    cout<<result<<endl;
    return 0;
}