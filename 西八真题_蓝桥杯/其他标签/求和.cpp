#include <iostream>
using namespace std;
typedef long long ll;
ll s,sum1,sum2;
int n;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int num;cin>>num;
        sum1+=num;
        sum2+=num*num;
    } 
    s=sum1*sum1-sum2;
    cout<<s/2;
    return 0;
}