# include <iostream>
using namespace std;
//右下边左上
int dy[]={1,0,-1,0};
int dx[]={0,1,0,-1};
int pos=0,n;
int main()
{
    cin>>n;
    int cnt=1;
    int arr[15][15]={0};
    int x=1,y=1;
    while(cnt<=n*n)
    {
        arr[x][y]=cnt;
        //下一个要算的数
        int xx=x+dx[pos],yy=y+dy[pos];
        if(xx<1||xx>n||yy<1||yy>n||arr[xx][yy])
        {
            pos=(pos+1)%4;
            xx=x+dx[pos],yy=y+dy[pos];
        }
        x=xx,y=yy;
        cnt++;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf("%3d",arr[i][j]);
        }
        cout<<endl;
    }
    return 0;
}