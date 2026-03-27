#include <iostream>
#include <string>
using namespace std;
string s;
int dp[1005][1005];
int main()
{
    cin>>s;
    int n=s.size();
    s=" "+s;
    for(int len=2;len<=n;len++)
    {
        for(int l=1;l+len-1<=n;l++)
        {
            int r=len+l-1;
            if(s[r]==s[l])
            {
                dp[l][r]=dp[l+1][r-1];
            }
            else
            {
                dp[l][r]=min(dp[l+1][r],dp[l][r-1])+1;
            }
        }
    }
    cout<<dp[1][n]<<endl;
    return 0;
}