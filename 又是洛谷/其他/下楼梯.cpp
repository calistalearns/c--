# include <iostream>
using namespace std;
typedef long long ll;
int n;
ll dp[65];
int main()
{
    cin>>n;
    dp[0]=1,dp[1]=1,dp[2]=2,dp[3]=4;
    if(n<3)
    {
        cout<<dp[n];
        return 0;
    }
    else
    {
        for(int i=3;i<=n;i++)
        {
            dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
        }
    }
    cout<<dp[n];
    return 0;
}