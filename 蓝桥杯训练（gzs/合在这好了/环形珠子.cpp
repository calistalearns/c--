#include <iostream>
#include <algorithm>
using namespace std;
const int N=1e5+10;
int n,a[N*2];
int main() {
    // 请在此处编写代码...
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    int cnt0=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        a[i+n]=a[i];
        if(a[i]==0)cnt0++;
    }
    
    if(cnt0==0||cnt0==n)
    {
        cout<<0<<endl;
        return 0;
    }
    int cnt1=0;
    for(int i=0;i<cnt0;i++)
    {
        if(a[i]==1)cnt1++;
    }
    
    int ans=cnt1;
    for(int i=cnt0;i<n+cnt0;i++)
    {
        if(a[i]==1) cnt1++;
        if(a[i-cnt0]==1) cnt1--;
        ans=min(ans,cnt1);
    }
    cout<<ans<<endl;
    return 0;
}