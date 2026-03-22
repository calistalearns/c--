#include <iostream>
using namespace std;
int n;
int used[10],a[10];
void printf()
{
    for(int i=0;i<n;i++)
    {
        printf("%5d",a[i]);
    }
    cout<<endl;
}
void dfs(int dex)
{
    if(dex==n)
    {
        printf();
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(!used[i])
        {
            a[dex]=i+1;
            used[i]=1;
            dfs(dex+1);
            used[i]=0;
        }
    }
}
int main()
{
    cin>>n;
    dfs(0);
    return 0;
}