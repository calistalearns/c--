# include <iostream>
using namespace std;
int n,m,b[105][105];
char a[105][105];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='*')
            {
                b[i+1][j]++;
                b[i+1][j+1]++;
                b[i+1][j-1]++;
                b[i][j+1]++;
                b[i][j-1]++;
                b[i-1][j]++;
                b[i-1][j+1]++;
                b[i-1][j-1]++;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i][j]=='*')cout<<"*";
            else cout<<b[i][j];
        }
        cout<<endl;
    }
    return 0;
}