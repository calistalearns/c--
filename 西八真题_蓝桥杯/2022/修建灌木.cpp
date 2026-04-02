#include <iostream>
#include <algorithm>
using namespace std;
int n;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<max(n-i,i-1)*2<<endl;
    }
    return 0;
}