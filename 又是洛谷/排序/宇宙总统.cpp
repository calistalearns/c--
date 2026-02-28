# include <iostream>
# include <algorithm>
# include <string>
using namespace std;
int n;
struct P
{
    int num;
    string p;
}peo[105];
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string a;
        cin>>a;
        peo[i].num=i+1;
        peo[i].p=a;
    }
    sort(peo,peo+n,[](P &a,P &b)
    {
        if(a.p.length()!=b.p.length()) 
        return a.p.length()>b.p.length();
        else
        return a.p>b.p;
    });
    cout<<peo[0].num<<endl<<peo[0].p;
    return 0;
}