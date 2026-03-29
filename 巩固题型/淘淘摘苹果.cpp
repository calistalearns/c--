#include <iostream>
using namespace std;
int main()
{
    int a[11],h;
    for(int i=1;i<=10;i++)cin>>a[i];
    cin>>h;
    int ans=0;
    for(int i=1;i<=10;i++)
    {
        if(h+30>=a[i]) ans++;
    }
    cout<<ans;
    return 0;
}