# include <iostream>
using namespace std;
int n;
struct node
{
    char l,r;
}t[150];
void dfs(char pos)
{
    cout<<pos;
    if(t[pos].l!='*') dfs(t[pos].l);
    if(t[pos].r!='*') dfs(t[pos].r);
}
int main()
{
    cin>>n;
    char bg,l,r;
    cin>>bg>>l>>r;
    t[bg].l=l,t[bg].r=r;
    for(int i=1;i<n;i++)
    {
        char a,b,c;
        cin>>a>>b>>c;
        t[a].l=b,t[a].r=c;
    }
    dfs(bg);
    return 0;
}