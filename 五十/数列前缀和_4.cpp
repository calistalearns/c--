#include <iostream>
#include <cstring>
using namespace std;
typedef unsigned long long ull;
const int N=1e3+10;
int n,m,q;
ull f[N][N],num;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;cin>>T;
    while(T--)
    {
        memset(f,0,sizeof(f));
        ull ans=0;
        cin>>n>>m>>q;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                cin>>num;
                f[i][j]=num-f[i-1][j-1]+f[i-1][j]+f[i][j-1];
            }
        }
        int u,v,x,y;
        ull sum=0;
        while(q--)
        {
            cin>>u>>v>>x>>y;
            sum=f[x][y]-f[u-1][y]-f[x][v-1]+f[u-1][v-1];
            ans=ans^sum;
        }
        cout<<ans<<endl;
    }
    cout<<endl;
    return 0;
}