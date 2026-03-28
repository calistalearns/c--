#include <iostream>
#include <algorithm>
using namespace std;
int m,n,w[10100],ans;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>w[i];
    }
    int p=m+1;
    while(p<=n+m)
    {
        for(int i=1;i<=m;i++)
        {
            w[i]--;
            if(w[i]==0)
            {
                w[i]=w[p];
                p++;
            }
        }
        ans++;
    }
    cout<<ans;
    return 0;
}