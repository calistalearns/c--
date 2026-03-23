# include <iostream>
# include <stack>
using namespace std;
const int N=3e6+10;
int n,a[N],ret[N];
stack<int>s;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    
    for(int i=n;i>=1;i--)
    {
        while(s.size()&&a[s.top()]<=a[i]) s.pop();
        if(s.size()) ret[i]=s.top();
        s.push(i);
    }
    for(int i=1;i<=n;i++) cout<<ret[i]<<" ";
    return 0;
}