# include <iostream>
# include <vector>
using namespace std;
int main()
{
    vector <int > v;
    v.resize(10);
    for(int i=0;i<10;i++)
        v[i]=i;
    for(int i=0;i<10;i++)
        cout<<v[i] <<" ";
    
    cout<<endl<<"一共有多少个数："<<endl<<v.size()<<endl;
    v.push_back(100);//插入你
    for(int i=0;i<11;i++)
        cout<<v[i]<<" " ;
    cout<<endl;
    cout<<"来迭代器"<<endl;
    for(auto p=v.begin();p!=v.end();p++)
        cout<<*p<<" ";
    return 0;
}