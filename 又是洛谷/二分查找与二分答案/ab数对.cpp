# include <iostream>
# include <unordered_map>

int n;
long long c;

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);  
    cin>>n>>c;
    unordered_map<long long,int>freq;
    long long x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        freq[x]++;
    }
    long long ans=0;
    for(auto&p:freq)
    {
        long long b=p.first;
        long long target=b+c;
        if(freq.count(target))
        {
            ans+=(long long)p.second*freq[target];
        }
    }
    cout<<ans<<endl;
    return 0;
}