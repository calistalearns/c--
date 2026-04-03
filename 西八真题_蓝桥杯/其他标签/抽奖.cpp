#include <iostream>
#include <algorithm>
using namespace std;
const int N=1e3+10;
int n,a[N],b[N],c[N],m;
int number(int num1,int num2,int num3)
{
    int a[3]={num1,num2,num3};
    sort(a,a+3);
    if(num1==num2&&num2==num3) return 200;
    else if(num1==num2||num2==num3||num1==num3) return 100;
    else if(num2-num1==1&&num3-num2==1) return 200;
    else if(a[0]+1==a[1]&&a[1]+1==a[2]) return 100;
    else return 0;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    for(int i=0;i<n;i++)cin>>c[i];
    cin>>m;
    int ans=0,pos1=0,pos2=0,pos3=0;
    while(m--)
    {
        int x1,x2,x3;
        cin>>x1>>x2>>x3;
        pos1=(pos1+x1)%n;
        pos2=(pos2+x2)%n;
        pos3=(pos3+x3)%n;
        int num1=a[pos1],num2=b[pos2],num3=c[pos3];
        ans+=number(num1,num2,num3);
    }
    cout<<ans<<endl;
    return 0;
}