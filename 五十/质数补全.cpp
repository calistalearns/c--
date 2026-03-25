#include <iostream>
#include <string>
#include <vector>
using namespace std;
int t,ans,len;
string s;
const int N=1e7;
vector<bool>zhi(N,1);
void sz()
{
    zhi[0]=0,zhi[1]=0;
    for(int i=2;i<=N/i;i++)
    {
        if(zhi[i])
        {
            for(int j=i*i;j<N;j+=i)
            {
                zhi[j]=0;
            }
        }
    }
}

void dfs(int wei,int now)
{
    if(wei==len)
    {
        if(zhi[now])
        {
            if(ans==-1||now<ans) ans=now;
        }
        return;
    }
    if(s[wei]!='*')
    {
        dfs(wei+1,now*10+(s[wei]-'0'));
    }
    else
    {
        for(int i=0;i<=9;i++)
        {
            dfs(wei+1,now*10+i);
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>t;
    sz();
    while(t--)
    {
        cin>>s;
        len=s.size();
        ans=-1;
        dfs(0,0);
        cout<<ans<<endl;
    }
    return 0;
}