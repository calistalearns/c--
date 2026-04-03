#include <iostream>

using namespace std;
int f[2025];
bool prime(int num)
{
    if(num<=1) return 0;
    if(num==2) return 1;
    if(num%2==0) return 0;
    for(int i=3;i*i<=num;i+=2)
    {
        if(num%i==0) return 0;
    }
    return 1;
}
int main()
{
    int cnt=0;
    for(int i=1;i<1e5;i++)
    {
        if(prime(i))
        {
            f[cnt]=i;
            cnt++;
        }
        if(cnt==2025) break;
    }
    cout<<f[2024];
    return 0;
}