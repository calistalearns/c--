# include <iostream>
# include <algorithm>
using namespace std;
typedef long long ll;
int r,a[1005][1005], dp[1005][1005];
int main()
{
    cin>>r;
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cin>>a[i][j];
        }
    }

    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=i;j++)
        {
            dp[i][j]=max(dp[i-1][j]+a[i][j],dp[i-1][j-1]+a[i][j]);
        }
    }
    int ret=0;
    for(int i=1;i<=r;i++) ret=max(dp[r][i],ret);
    cout<<ret;
    return 0;
}