# include <iostream>
# include <list>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    list<int>v;
    v.push_back(1);
    for(int i=2;i<=n;i++)
    {
        int k,p;
        cin>>k>>p;
        auto it=v.begin();
        while(*it!=k)it++;
        if(p==0)//左
        {
            v.insert(it,i);
        }
        else if(p==1)//右
        {
            v.insert(next(it),i);
        }
    }
    
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int x;cin>>x;
        auto it=v.begin();
        while(*it!=x&&it!=v.end())it++;
        if(it!=v.end())v.erase(it);
    }
bool first = true;
for(int x : v)
{
    if(!first) cout << " ";
    cout << x;
    first = false;
}
cout << "\n";
    return 0;
}