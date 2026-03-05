# include <iostream>
# include <string>
# include <map>
using namespace std;
int q,opp,soc;
string name;
map<string,int>m;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>q;
    for(int i=0;i<q;i++)
    {
            cin>>opp;
        if(opp==1)//插、修
        {
            cin>>name>>soc;
            m[name]=soc;
            cout<<"OK"<<endl;
        }
        else if(opp==2)//查找
        {
            cin>>name;
            if(m.find(name)!=m.end())//找到了
            {
                cout<<m[name]<<endl;
            }
            else
                cout<<"Not found"<<endl;
        }
        else if(opp==3)//删除
        {
            cin>>name;
            if(m.find(name)==m.end())
            {
                cout<<"Not found"<<endl;
            }
            else
            {
                m.erase(name);
                cout<<"Deleted successfully"<<endl;
            }
        }
        else if(opp==4)//汇总
        {
            cout<<m.size()<<endl;
        }
    }
    return 0;
}