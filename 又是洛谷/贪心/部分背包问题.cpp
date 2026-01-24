# include <iostream>
# include <algorithm>
using namespace std;
struct coin
{
    double m,v,unit;
};
bool cmp(coin a,coin b)
{
    return a.unit>b.unit;
}
int main()
{
    int n,t;
    cin>>n>>t;
    coin arr[100];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].m>>arr[i].v;
        arr[i].unit=arr[i].v/arr[i].m;
    }
    sort(arr,arr+n,cmp);
    int rem=t;
    double mon=0.0;
    for(int i=0;i<n;i++)
    {
        if(rem>arr[i].m)
        {
            mon+=arr[i].v;
            rem-=arr[i].m;
        }
        else
        {
            mon+=arr[i].unit*rem;
            break;
        }
    }
    printf("%.2f",mon);
    return 0;
}