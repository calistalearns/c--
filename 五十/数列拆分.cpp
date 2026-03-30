#include <iostream>
#include <algorithm>
using namespace std;
const int N=1e5+10;
int n,a[N],b[N];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)cin>>b[i];
    sort(a+1,a+1+n);
    sort(b+1,b+1+n);
    int cnt=0;
    int dex1=n,dex2=n;
    while(dex2)
    {
        if(a[dex1]>b[dex2])
        {
            dex1--,dex2--;
        }
        else
        {
            cnt++;
            dex2--;
        }
    }
    cout<<cnt;
    return 0;
}