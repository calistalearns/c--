# include <iostream>
# include <string>
# include <map>
using namespace std;
int n,ans=0;
string a,b;
map<string,int>mmap;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b;
        a=a.substr(0,2);
        if(a!=b)
        {
            ans+=mmap[b+a];
            mmap[a+b]++;
        }
    }
    cout<<ans<<endl;
    return 0;
}