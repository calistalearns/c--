# include <iostream>
using namespace std;
int n,f[1005];
int main()
{
    cin >>n;
    f[1]=1;
    f[2]=2;
    f[3]=2;
    for(int i=3;i<=n;i++)
    {
        if(i%2==0)//偶数
        {
            f[i]=f[i-1]+f[i/2];
        }
        else 
        {
            f[i]=f[i-1];
        }
    }
    cout<<f[n]<<endl;
    return 0;
}