# include <iostream>
# include <bitset>
using namespace std;
int main()
{
    bitset <5>b(19);
    cout<<b<<endl;
    cout<<"是否含有1？"<<b.any()<<endl;
    cout<<"有几个1呢？"<<b.count()<<endl;
    cout<<"所以位置取反为："<<b.flip()<<endl;
    unsigned long a=b.to_ulong();
    cout<<"他代表的十位制数："<<a<<endl;

    return 0;
}