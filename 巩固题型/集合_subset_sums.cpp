#include <iostream>
using namespace std;
int n,a[40],dp[40][1000];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)a[i]=i;
    dp[0][0]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=n*(n+1)/2;j++)
        {
            dp[i][j]=dp[i-1][j];
            if(j>=a[i]) dp[i][j]+=dp[i-1][j-a[i]];
        }
    }
    if(n*(n+1)%4==0)cout<<dp[n][n*(n+1)/4]/2<<endl;
    else cout<<0<<endl;
    return 0;
}