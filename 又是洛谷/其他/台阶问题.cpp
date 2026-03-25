#include <iostream>
using namespace std;
const int N=1e5+10;
int n,k,ans=0,dp[N];
int main()
{
    cin>>n>>k;
    dp[0]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=k&&i-j>=0;j++)
        {
            dp[i]=(dp[i]+dp[i-j])%100003;
        }
    }
    cout<<dp[n];
    return 0;
}