# include <iostream>
# include <map>
using namespace std;
map<int,int>m;
int n,q;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int num;
        cin>>num;
        m.insert({num,i});
    }
    cin>>q;
    for(int i=1;i<=q;i++)
    {
        int num;//打倒m个
        cin>>num;
        if(m.find(num)!=m.end())//找到了
        {
            cout<<m[num]<<endl;
        }
        else
        cout<<"0"<<endl;
    }
    return 0;
}