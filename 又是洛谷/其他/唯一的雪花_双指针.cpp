# include <iostream>
# include <cmath>
# include <unordered_map>
using namespace std;
const int N=1e6;
int arr[N];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int nn;cin>>nn;
    while(nn--)
 {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>arr[i];
    int left=1,right=1,ma=0;
    unordered_map<int,int>m;
    while(right<=n)
    {
        m[arr[right]]++;
        while(m[arr[right]]>1)
        {
            m[arr[left]]--;
            left++;
        }
        ma=max(ma,right-left+1);
        right++;
    }
    cout<<ma<<endl;
 }
    return 0;
}