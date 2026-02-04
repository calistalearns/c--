# include <iostream>
using namespace std;
# define MAX 100005
int main()
{
    int n;
    cin>>n;
    int arr[MAX];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    int ans=0;
    for(int i=2;i<=n;i++)
    {
        if(arr[i]>arr[i-1])
        ans+=arr[i]-arr[i-1];
    }
    cout<<ans+arr[1]<<endl;
    return 0;
}