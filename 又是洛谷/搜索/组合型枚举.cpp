# include <iostream>
# include <vector>
using namespace std;
int n,m;
vector<int>a;
void dfs(int x)
{
    if(a.size()==m)
    {
        for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
        cout<<endl;
        return;
    }

    for(int i=x;i<=n;i++)
    {
        a.push_back(i);
        dfs(i+1);
        a.pop_back();
    }
}

int main()
{
    cin>>n>>m;
    dfs(1);
    return 0;
}