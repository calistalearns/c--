# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;
struct Time
{
    int start,end;
};

int main()
{
    int n;
    cin>>n;
    vector<Time> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i].start>>v[i].end;
    }
    int count=0;//记数
    sort(v.begin(),v.end(),[](Time a,Time b)
    {
        return a.end<b.end;
    });

    int endd=0;
    for(int i=0;i<n;i++)
    {
        if(v[i].start>=endd)
        {
            count++;
            endd=v[i].end;
        }
    }
    cout<<count<<endl;
    return 0;
}