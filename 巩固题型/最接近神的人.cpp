#include <iostream>
#include <algorithm>
using namespace std;
const int N=5e5+10;
typedef long long ll;
int n;
int a[N],temp[N];
ll merge(int left,int right)
{
    if(left>=right) return 0;
    ll ret=0;
    int mid=(left+right)/2;
    ret+=merge(left,mid);
    ret+=merge(mid+1,right);
    int cur1=left,i=left,cur2=mid+1;
    while(cur1<=mid&&cur2<=right)
    {
        if(a[cur1]<=a[cur2]) temp[i++]=a[cur1++];
        else
        {
            ret+=mid-cur1+1;
            temp[i++]=a[cur2++];
        }
    }
    while(cur1<=mid) temp[i++]=a[cur1++];
    while(cur2<=right) temp[i++]=a[cur2++];
    for(int j=left;j<=right;j++) a[j]=temp[j];
    return ret;
}
int main()
{
    //不下降->越来越大
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
   cout<<merge(1,n)<<endl;
    return 0;
}