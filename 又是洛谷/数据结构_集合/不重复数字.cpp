# include <iostream>
# include <unordered_set>
# include <vector>
using namespace std;
int n;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--)
    {
        cin>>n;
        unordered_set<int> seen;
        vector<int> s;
        for(int i=1;i<=n;i++)
        {
            int num;
            cin>>num;
            if(!seen.count(num))
            {
                seen.insert(num);
                s.push_back(num);
            }
        }
        for(int i=0;i<s.size();i++)
        {
            cout<<s[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}