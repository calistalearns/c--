# include <iostream>
# include <algorithm>
# include <cmath>
using namespace std;
# define MAX 1000005
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int m,n;//学校，学生
    cin>>m>>n;
    int a[MAX],b[MAX];//分数线，估分

    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    sort(a,a+m);
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        int fs=b[i];
        auto it=lower_bound(a,a+m,fs);//指针
        int diff;
        if(it==a)//最开始
        {
            diff=a[0]-fs;
        }
        else if(it==a+m)
        {
            diff=fs-a[m-1];
        }
        else
        {
            int c1=*it-fs;
            int c2=fs-*(it-1);
            diff=min(c1,c2);
        }
        sum+=diff;
    }
    cout<<sum<<endl;
    return 0;
}
