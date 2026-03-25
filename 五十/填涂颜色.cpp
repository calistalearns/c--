#include <iostream>
#include <cstring>
using namespace std;
int n,a[35][35];
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }

    return 0;
}