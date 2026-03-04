# include <iostream>
using namespace std;
int n,m,p,x,y,fa[5005];//看父亲是不是组长
int find(int x)
{
    if(x==fa[x]) return x;
    return find(fa[x]);
}
int main()
{
    cin>>n>>m>>p;
    for(int i=1;i<=n;i++)fa[i]=i;
    for(int i=1;i<=m;i++)
    {
        cin>>x>>y;
        int fax=find(x),fay=find(y);
        if(fax!=fay) fa[fax]=fay;
    }
    for(int i=1;i<=p;i++)
    {
        cin>>x>>y;
        int fax=find(x),fay=find(y);
        if(fax!=fay)cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
    return 0;
}