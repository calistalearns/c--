#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
int n,a[100005];
ll sum1,sum2;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];

    for(int i=1;i<=n;i++)
    {
        sum1+=sum2*a[i];
        sum2+=a[i];
    }
    cout<<sum1<<endl;
    return 0;
}