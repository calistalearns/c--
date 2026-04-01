#include <iostream>
using namespace std;
int main()
{
    int n,cnt=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        if(num!=1) cnt++;
    }
    cout<<cnt;
}