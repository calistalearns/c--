#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n,s,a,b;
vector<int>pp;
struct P
{
    int x,y;
}p[5005];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>s;//果子数，力气
    cin>>a>>b;//椅子高度，手长度
    int h=a+b;
    for(int i=1;i<=n;i++)
    {
        cin>>p[i].x>>p[i].y;//苹果高度，需要的力气
        if(h>=p[i].x) pp.push_back(p[i].y);//力气存进去
    }
    int ans=0;
    sort(pp.begin(),pp.end());
    while(ans<pp.size()&&s>=pp[ans])
    {
        s-=pp[ans++];
    }
    cout<<ans<<endl;
    return 0;
}