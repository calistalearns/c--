#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int v,n,a,b,ma=INT_MAX,mi=INT_MIN;
int main()
{
    cin>>v;
    while(v--)
    {
        cin>>a>>b;
        mi=max(mi,a/(b+1)+1);
        ma=min(ma,a/b);
    }
    cout<<mi<<" "<<ma<<endl;
    return 0;
}