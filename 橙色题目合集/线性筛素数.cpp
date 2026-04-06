#include <iostream>
using namespace std;
const int N=1e8;
int prime[N],cnt;
bool st[N];
int n,q,k;
void get_primes(int n)
{
    for(int i=2;i<=n;i++)
    {
        if(!st[i]) prime[cnt++]=i;
        for(int j=0;prime[j]<=n/i;j++)
        {
            st[prime[j]*i]=1;
            if(i%prime[j]==0) break;
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>q;
    get_primes(n);

    for(int i=0;i<q;i++)
    {
        cin>>k;
        cout<<prime[k-1]<<endl;
    }
    return 0;
}