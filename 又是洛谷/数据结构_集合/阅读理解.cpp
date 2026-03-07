# include <iostream>
# include <string>
# include <map>
# include <vector>
using namespace std;
int n,l,m;
map<string,vector<int>>ma;
string s;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>l;
        for(int j=1;j<=l;j++)
        {
            cin>>s;
            ma[s].push_back(i);
        }
    }
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>s;
        if(ma.find(s)!=ma.end())//找到
        {
            for(int j=0;j<ma[s].size();j++)
            {
                cout<<ma[s][j]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}