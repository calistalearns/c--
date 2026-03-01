# include <iostream>
# include <algorithm>
# include <string>
using namespace std;
int n;
struct tx
{
    string name;
    int year,mon,day,index;
}p[105];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>p[i].name>>p[i].year>>p[i].mon>>p[i].day;
        p[i].index=i;
    }
    sort(p,p+n,[](tx &a,tx &b)
    {
        if(a.year!=b.year) return a.year<b.year;
        else if(a.mon!=b.mon) return a.mon<b.mon;
        else if(a.day!=b.day) return a.day<b.day;
        else return a.index>b.index;
    });
    for(int i=0;i<n;i++)
    {
        cout<<p[i].name<<endl;
    }
    return 0;
}