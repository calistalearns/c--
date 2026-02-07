# include <iostream>
using namespace std;
int n,m;
int arr[1000005];
int find(int x)
{
   
    int l=1,r=n;
    int ans=-1;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(arr[mid]>=x)
        {
            if(arr[mid]==x)ans=mid;
            r=mid-1;
        }
        else l=mid+1;
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>m;//大于等于，有序
    
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        cout<<find(x)<<" ";
    }
    
    return 0;
}