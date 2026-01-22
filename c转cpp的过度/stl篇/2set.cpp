# include <iostream>
# include <set>
using namespace std;
int main()
{
    set<int >s;
    s.insert(3);
    s.insert(2);
    s.insert(1);
    for(auto p=s.begin();p!=s.end();p++)
    {
        cout<<*p<<" ";
    }
    cout<<endl;

    //bool值，有找到，就返回1
    cout<<(s.find(3)!=s.end())<<endl;
    cout<<(s.find(6)!=s.end())<<endl;
    cout<<(s.find(1)!=s.end())<<endl;

    s.erase(1);
    cout<<(s.find(1)!=s.end())<<endl;
    return 0;
}