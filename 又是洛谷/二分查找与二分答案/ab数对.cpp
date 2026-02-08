# include <iostream>
# include <algorithm>
# define MAX 1000005
int n,c;
int arr[MAX];
int find(int arr[])
{
    int count=0;//计数
    int l=1,r=n;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        int ans=arr[r]-arr[l];
        if(ans==c&arr[r]!=arr[r-1]&&arr[l]!=arr[l+1])
        {
            count++;
            r++;
            l--;
        }
        else if(ans!=c)
        {
            
        }
    }
    return count;
}
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    cin>>n>>c;
    
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);//从小到大
    cout<<find(arr)<<endl;
    return 0;
}