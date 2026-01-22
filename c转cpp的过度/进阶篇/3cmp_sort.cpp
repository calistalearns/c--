# include <iostream>
# include <algorithm>
using namespace std;

struct stu
{
    string name;
    int number;
};
bool cmp(stu a,stu b)
{
    if(a.number!=b.number)//年龄不同，返回从小到大
        return a.number<b.number;
    else
        return a.name<b.name;
}
int main()
{
    stu a[3];
    for(int i=0;i<3;i++)
    {
        cin>>a[i].name>>a[i].number;
    }
    //cmp特殊排序
    sort(a,a+3,cmp);
    for(int i=0;i<3;i++)
    {
        cout<<a[i].name<<" "<<a[i].number<<endl;
    }
    return 0;
}