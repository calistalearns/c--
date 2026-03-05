# include <iostream>
using namespace std;
int a,b,ans=-1,p,f[100005];
int find(int x)
{
    if(x!=f[x]) return find(f[x]);
    else return x;
}
bool ys(int a,int b)
{
    int x=a,y=b;
    while(y)
    {
        int z=x%y;
        x=y;
        y=z;
    }
    int temp=x;
    for(int i=2;i*i<=temp;i++)
    {
        if(temp%i==0)
        {
            if(i>=p) return 1;
            while(temp%i==0)
            {
                temp/=i;
            }
        }
    }
    if(temp>=p&&temp>1)return 1;
    return 0;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>a>>b>>p;
    for(int i=a;i<=b;i++) f[i]=i;
    for(int i=a;i+1<=b;i++)
    {
        for(int j=i+1;j<=b;j++)
        {
            int fx=find(i),fy=find(j);
            if(fx!=fy&&ys(i,j))
            {
                f[fx]=fy;
            }
        }
    }

    for(int i=a;i<=b;i++)
    {
        if(i==f[i]) ans++;
    }

    cout<<ans<<endl;
    return 0;
}