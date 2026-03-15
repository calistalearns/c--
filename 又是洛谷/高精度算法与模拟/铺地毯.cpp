# include <iostream>
using namespace std;
const int N=1e5;
int n,x,y;
int a[N],b[N],c[N],d[N];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i]>>c[i]>>d[i];
    }
    cin>>x>>y;
    for(int i=n;i>0;i--)
    {
        if(x>=a[i]&&y>=b[i]&&x<=a[i]+c[i]&&y<=b[i]+d[i])
        {
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<"-1"<<endl;
    return 0;
}