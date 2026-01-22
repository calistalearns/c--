# include <iostream>
# define MAX 100010
using namespace std;
int main()
{
    //0朝里面，1朝外面
    //0左1右
    int n,m;
    cin>>n>>m;
    int out[MAX],idex=1,a,b;
    string name[MAX];
    //朝向的状态
    for(int i=1;i<=n;i++)
    {
        cin>>out[i]>>name[i];
    }
    //指令
    for(int i=1;i<=m;i++)
    {
        cin>>a>>b;
        idex=(idex+(a^out[idex]?b:n-b))%n;
        idex=(!idex?n:idex);
    }
    cout<<name[idex]<<endl;
    return 0;
}