# include <iostream>
# include <vector>
# include <algorithm>
# include <unordered_map>
using namespace std;
int main()
{
    //实力值连续且不重复
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());//从小到大
    
    int ans=n;
    int left=0;
    while(left<n)
    {
        int right=left;
        while(right<n)
        {
            if(right>left&&v[right]!=v[right-1]&&v[right]!=v[right-1]+1)break;
            right++;
        }
        unordered_map<int,int> u;
        for(int i=left;i<right;i++)
        {
            u[v[i]]++;
        }
        int tol=right-left;
        int maxcnt=0;
        for(auto &p:u)
        {
            if(p.second>maxcnt)
            maxcnt=p.second;
        }
        ans=min(ans,tol/maxcnt);
        left=right;
    }
    cout<<ans<<endl;
    return 0;
}