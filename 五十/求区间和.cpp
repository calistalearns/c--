# include <iostream>
using namespace std;
const int N=1e5+10;
int n,m,l,r;
int f[N],a[N];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        f[i]=f[i-1]+a[i];
    }
    cin>>m;
    while(m--)
    {
        cin>>l>>r;
        cout<<f[r]-f[l-1]<<endl;
    }
    return 0;
}