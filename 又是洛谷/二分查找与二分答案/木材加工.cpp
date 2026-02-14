# include <iostream>
# include <vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,k;//多少木头，段长度，几段
    cin>>n>>k;
    vector<int>a(n);
    int maxlen=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>maxlen) maxlen=a[i];
    }
    int left=1,right=maxlen;
    int ans=0;
    while(left<=right)
    {
        int mid=left+(right-left)/2;
        long long cnt=0;
        for(int i=0;i<n;i++)
        {
            cnt+=a[i]/mid;
        }
        if(cnt>=k)
        {
            ans=mid;
            left=mid+1;
        }
        else if(cnt<k)
        {
            right=mid-1;
        }
    }
    cout<<ans<<endl;
    return 0;
}