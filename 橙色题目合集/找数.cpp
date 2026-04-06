#include <iostream>
#include <set>
using namespace std;
int n,m,cnt;
set<int> s;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>m;
    int num;
    for(int i=1;i<=n;i++) 
    {
        cin>>num;
        s.insert(num);
    }
    for(int i=1;i<=m;i++)
    {
        cin>>num;
        if(s.find(num)!=s.end()) cnt++;
    } 
    cout<<cnt<<endl;
    return 0;
}