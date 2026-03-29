#include <iostream>
using namespace std;
int n,a[105];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    if(n%2==0)
    {
        for(int i=1;i<=n;i+=2)
        {
            cout<<a[i]<<a[i+1];
            if(i<n-1) cout<<"-";
        }
    }
    else
    {
        cout<<a[1]<<a[2]<<a[3];
        if(n>3)
        {
            cout<<"-";
            for(int i=4;i<=n;i+=2)
            {
                cout<<a[i]<<a[i+1];
                if(i<n-1) cout<<"-";
            }
        }
    }
    return 0;
}