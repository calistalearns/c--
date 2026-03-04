# include <iostream>
using namespace std;
int f[1005];
int find(int x)
{
    if(x!=f[x]) 
    return find(f[x]);
    else return x;
}
int main()
{
    int n,m;
    cin>>n;
    while(n!=0)
    {
        int ans=-1;
        cin>>m;
        for(int i=1;i<=n;i++) f[i]=i;
        for(int i=1;i<=m;i++)
        {
            int x,y;
            cin>>x>>y;
            int fx=find(x),fy=find(y);
            if(fx!=fy) f[fx]=fy;
        }
        for(int i=1;i<=n;i++)
        {
            if(f[i]==i)
            ans++;
        }
        cout<<ans<<endl;
        cin>>n;
    }
    return 0;
}