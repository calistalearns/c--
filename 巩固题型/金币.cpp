#include <iostream>
using namespace std;
int n,ans,d,c;
int main()
{
    cin>>n;
    d=c=1;
    for(int i=1;i<=n;i++)
    {
        ans+=c;
        d--;
        if(d==0)
        {
            c+=1;
            d=c;
        }
    }
    cout<<ans<<endl;
    return 0;
}