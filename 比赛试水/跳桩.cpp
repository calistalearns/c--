#include <iostream>
using namespace std;
int n,x,a[1005];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;cin>>T;
    while(T--)
    {
        cin>>n>>x;
        for(int i=1;i<=n;i++)cin>>a[i];
        bool found=1;
        for(int i=1;i+1<=n;i++)
        {
            if(a[i+1]>a[i])
            {
                if(a[i+1]-a[i]!=1)
                {
                    cout<<"Lose"<<endl;
                    found=0;
                    break;
                }
            }
            else if(a[i+1]<a[i])
            {
                if(a[i]-a[i+1]>x)
                {
                    cout<<"Lose"<<endl;
                    found=0;
                    break;
                }
            }
        }
        if(found) cout<<"Win"<<endl;
    }
    return 0;
}