# include <iostream>
# include <cmath>
using namespace std;
int n,num;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    for(int i=n;i>=0;i--)
    {
        cin>>num;
        int a=abs(num);
        if(num==0) continue;
        //符号
        if(num>0)
        {
            if(i!=n) cout<<"+";
        }
        else cout<<"-";
        //系数
        if(a==1)
        {
            if(i==0) cout<<1;
        }
        else cout<<a;
        //次数
        if(i!=0)
        {
            if(i!=1)cout<<"x^"<<i;
            else cout<<"x";
        }
    }
    return 0;
}