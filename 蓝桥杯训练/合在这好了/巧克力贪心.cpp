#include <iostream>

using namespace std;
const int N=1e5+10;
int n,k;
int h[N],w[N];
bool check(int x)
{
    long long cnt=0;
    for(int i=0;i<n;i++)
    {
        cnt+=(h[i]/x)*(w[i]/x);
    }
    if(cnt>=k)return 1;
    else return 0;
}
int main() {
    // 请在此处编写代码...
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>h[i]>>w[i];
    }
    int l=1,r=1e5;
    while(l<r)
    {
        int mid=l+r+1>>1;
        if(check(mid)) l=mid;
        else r=mid-1;
    }
    cout<<l<<endl;
    return 0;
}