# include <iostream>
# include <queue>
using namespace std;
int n;
int main()
{
    cin>>n;
    n=1<<n;
    queue<pair<int,int>>q;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        q.push(make_pair(i,x));//前面为国家编号，后者为实力
    }
    while(q.size()>2)
    {
        pair<int,int>x,y;
        x=q.front();
        q.pop();
        y=q.front();
        q.pop();
        if(x.second>y.second)
        {
            q.push(x);
        }
        else
            q.push(y);
    }

    pair<int,int>x,y;
    x=q.front();
    q.pop();
    y=q.front();
    q.pop();
    if(x.second>y.second)
    {
        cout<<y.first<<endl;
    }
    else
        cout<<x.first<<endl;
    return 0;
}