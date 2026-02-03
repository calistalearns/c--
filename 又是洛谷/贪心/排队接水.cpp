# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;
struct people
{
    int time,id;
};

int main()
{
    int n;
    cin>>n;
    vector<people>per(n);
    for(int i=0;i<n;i++)
    {
        cin>>per[i].time;
        per[i].id=i+1;
    }
    sort(per.begin(),per.end(),[](const people &a,const people &b)
    {
        if(a.time!=b.time)return a.time<b.time;
        return a.id<b.id;
    });

    for(int i=0;i<n;i++)
    {
        cout<<per[i].id<<" ";
    }
    cout<<endl;

    double ans=0.0;
    for(int i=0;i<n;i++)
    {
        ans+=per[i].time*(n-1-i);
    }
    ans=ans/n;
    printf("%.2f",ans);
    return 0;
}