# include <iostream>
# include <map>
using namespace std;
int main()
{
    map <string,int>m;
    m["hello"]=1;
    m["world"]=2;
    for(auto p=m.begin();p!=m.end();p++)
    {
        cout<<p->first<<":"<<p->second<<endl;
    }
    return 0;
}