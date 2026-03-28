#include <iostream>
using namespace std;
int n,m,z,c;
int main()
{
    cin>>n>>m;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            for(int k=1+i;k<=n;k++)
            {
                for(int l=j+1;l<=m;l++)
                {
                    if(k-i==l-j)z++;
                    else c++;
                }
            }
        }
    }
    cout<<z<<" "<<c<<endl;
    return 0;
}