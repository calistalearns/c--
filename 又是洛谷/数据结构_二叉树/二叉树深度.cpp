# include <iostream>
# define MAX 1000005
using namespace std;
int n,ans;
struct node
{
    int z,y;
}tree[MAX];
void dfs(int id,int deep)
{
    if(id==0)return;
    ans=max(ans,deep);
    dfs(tree[id].y,deep+1);
    dfs(tree[id].z,deep+1);
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>tree[i].z>>tree[i].y;
    }
    dfs(1,1);
    cout<<ans<<endl;
    return 0;
}