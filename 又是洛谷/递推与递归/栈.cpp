# include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int f[20][20]={0};
    for(int x=0;x<=n;x++)
    {
        for(int y=0;y<=n;y++)
        {
            if(!x) f[x][y]=1;
            else if(!y)f[x][y]=f[x-1][y+1];
            else  f[x][y]=f[x-1][y+1]+f[x][y-1];
        }
    }
    cout<<f[n][0]<<endl;
    return 0;
}