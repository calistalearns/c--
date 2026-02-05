# include <iostream>
# include <algorithm>
# define MAX 30005
using namespace std;
int main()
{
    int w,n;//上限,总件数 
    cin>>w>>n;
    int arr[MAX];
    int l=1,r=n,ans=0;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    sort(arr+1,arr+n+1);
    while(l<=r)
    {
        if(arr[l]+arr[r]<=w)
        {
            l++;
            r--;
            ans++;
        }
        else
        {
            r--;
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}