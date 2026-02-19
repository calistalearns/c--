# include <iostream>
using namespace std;
long long memo[21][21][21];
long long w(int a,int b,int c)
{
    if(a<=0||b<=0||c<=0)
    {
        return 1;
    }
    else if(a>20||b>20||c>20)
    {
        return w(20,20,20);
    }
    if(memo[a][b][c]!=-1)
    {
        return memo[a][b][c];
    }
    long long result;
    if(a<b&&b<c)
    {
        result= w(a,b,c-1)+w(a,b-1,c-1)-w(a,b-1,c);
    }
    else
    {
        result= w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);
    }
    memo[a][b][c]=result;
    return result;
}
int main()
{
    for(int i=0;i<=20;i++)
    {
        for(int j=0;j<=20;j++)
        {
            for(int k=0;k<=20;k++)
            {
                memo[i][j][k]=-1;
            }
        }
    }
    long long  a,b,c;
    while(scanf("%lld %lld %lld",&a,&b,&c)!=EOF)
    {
        if(a==-1&&b==-1&&c==-1)break;
        printf("w(%d, %d, %d) = %lld\n",(int)a,(int)b,(int)c,w(a,b,c));
    }
    return 0;
}