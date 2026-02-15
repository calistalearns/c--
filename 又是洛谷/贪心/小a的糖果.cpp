# include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int cnt=0;
    for(int i=0;i+1<n;i++)
    {
        while(arr[i]+arr[i+1]>x)
        {
            int need=arr[i]+arr[i+1]-x;
            int left=min(need,arr[i+1]);
            arr[i+1]-=left;
            cnt+=left;
            need-=left;
            if(need>0)
            {
                arr[i]-=need;
                cnt+=need;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}