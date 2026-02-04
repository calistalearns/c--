# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;

struct M
{
    int one,num;//单价和数量
};

int main()
{
    int n,m;//需求和人数
    cin>>n>>m;

    vector<M>arr(m);
    for(int i=0;i<m;i++)
    {
        cin>>arr[i].one>>arr[i].num;
    }
    sort(arr.begin(),arr.end(),[](M a,M b)
    {
        return a.one<b.one;//单价小的在前
    });
    int spend=0;
    int result=n;
    for(int i=0;i<n&&result>0;i++)
    {
        int buy=min(arr[i].num,result);
        spend+=arr[i].one*buy;
        result-=arr[i].num;
    }
    cout<<spend<<endl;
    return 0;
}