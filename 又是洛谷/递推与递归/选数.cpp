# include <iostream>
# include <vector>
using namespace std;
int n,k,cnt=0;
vector<int>a(21);
int susu(int x)
{
    if(x==2) return 1;
    else if(x<=1||x%2==0) return 0;
    else 
    {
        for(int i=3;i*i<=x;i+=2)
        {
            if(x%i==0) return 0;
        }
        return 1;
    }
}
void dfs(int start,int num,int sum)//开始数，查了多少数，总和
{
    if(num==k)
    {
        if(susu(sum))cnt++;
        return;
    }
    if(start==n)return;
    if(n-start<k-num)return;
    dfs(start+1,num+1,sum+a[start]);
    dfs(start+1,num,sum);
}
int main()
{ 
    cin>>n>>k;//总数与选几个相加
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    dfs(0,0,0);
    cout<<cnt;
    return 0;
}
