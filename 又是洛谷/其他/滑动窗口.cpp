#include <iostream>
#include <deque>
using namespace std;
const int N=1e6+10;
int n,k,a[N];
deque<int>q;//存序号的
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>k;
    for(int i=1;i<=n;i++)cin>>a[i];

    //从小开始
    for(int i=1;i<=n;i++)
    {
        while(q.size()&&a[q.back()]>=a[i]) q.pop_back();
        q.push_back(i);
        if(q.back()-q.front()+1>k) q.pop_front();
        if(i>=k) cout<<a[q.front()]<<" ";
    }
    cout<<endl;
    q.clear();
    for(int i=1;i<=n;i++)
    {
        while(q.size()&&a[q.back()]<=a[i]) q.pop_back();
        q.push_back(i);
        if(q.back()-q.front()+1>k) q.pop_front();
        if(i>=k) cout<<a[q.front()]<<" ";
    }
    return 0;
}