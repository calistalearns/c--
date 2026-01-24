# include <iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    long long qi[25][25]={0};
    for(int i=0;i<=a;i++)
    {
        for(int j=0;j<=b;j++)
        {
            qi[i][j]=1;//都标记为1
        }
    }
    //马
    qi[c][d]=0;
    if(c+2<=a&&d-1>=0)qi[c+2][d-1]=0;
    if(c+2<=a&&d+1<=b)qi[c+2][d+1]=0;
    if(c-2>=0&&d-1>=0)qi[c-2][d-1]=0;
    if(c-2>=0&&d+1<=b)qi[c-2][d+1]=0;
    //
    if(c-1>=0&&d-2>=0)qi[c-1][d-2]=0;
    if(c-1>=0&&d+2<=b)qi[c-1][d+2]=0;
    if(c+1<=a&&d-2>=0)qi[c+1][d-2]=0;
    if(c+1<=a&&d+2<=b)qi[c+1][d+2]=0;

    for(int i=0;i<=a;i++)
    {
        for(int j=0;j<=b;j++)
        {
            if(i==0&&j==0)continue;
            if(qi[i][j]==0)continue;
            if(i==0)
            {
                qi[i][j]=qi[i][j-1];
            }
            else if(j==0)
            {
                qi[i][j]=qi[i-1][j];
            }
            else
            {
                qi[i][j]=qi[i][j-1]+qi[i-1][j];
            }
        }
    }
    cout<<qi[a][b]<<endl;
    return 0;
}