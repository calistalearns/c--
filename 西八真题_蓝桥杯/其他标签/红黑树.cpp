#include <iostream>
using namespace std;
int m;
int dfs(int x,int y)
{
    if(x==1) return 1;
    if(y%2!=0)
    {
        int ty=(y+1)/2;
        if(dfs(x-1,ty)) return 1;
        return 0;
    }
    else
    {
        int ty=y/2;
        if(dfs(x-1,ty)) return 0;
        return 1;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,k;
    cin>>m;
    while(m--)
    {
        cin>>n>>k;
        cout<<(dfs(n,k)?"RED":"BLACK")<<endl;
    }
    return 0;
}