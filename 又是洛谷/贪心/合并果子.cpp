# include <stdio.h>
# include <queue>
# include <vector>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    priority_queue<int,vector<int>,greater<int>>p;
    for(int i=0;i<n;i++)
    {
        int num;
        scanf("%d",&num);
        p.push(num);
    }

    long long ans=0;

    while(p.size()>1)
    {
        int first=p.top();
        p.pop();
        int second=p.top();
        p.pop();
        long long result=first+second;
        ans+=result;
        p.push(result);
    }
    printf("%lld\n",ans);
    return 0;
}