# include <iostream>
# include <queue>
using namespace std;
int main()
{
    int n;
    cin>>n;
    priority_queue<int,vector<int>,greater<int>>p;
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        p.push(num);
    }

    int ans=0;

    while(p.size()>1)
    {
        int first=p.top();
        p.pop();
        int second=p.top();
        p.pop();
        int result=first+second;
        ans+=result;
        p.push(result);
    }
    cout<<ans<<endl;
    return 0;
}