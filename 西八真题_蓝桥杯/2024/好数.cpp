#include <iostream>
using namespace std;
int cnt=0,n;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int num=i;
        for(int j=1;num;j++)
        {
            if(j%2!=(num%10)%2) break;
            num/=10;
        }
        if(num==0) cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}