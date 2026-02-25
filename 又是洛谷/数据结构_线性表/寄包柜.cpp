# include <iostream>
# include <map>
using namespace std;
int n,q;//柜子总数，询问次数
int main()
{
    cin>>n>>q;
    map<int,map<int,int>>arr;
    int num;
    for(int a=0;a<q;a++)
    {
        cin>>num;
        if(num==1)//放入
        {
            int i,j,k;//柜子，格子，存啥？
            cin>>i>>j>>k;
            arr[i][j]=k;
        }
        else if(num==2)//查询
        {
            int i,j;//柜子，格子
            cin>>i>>j;
            if(arr[i][j]!=0)cout<<arr[i][j]<<endl;
        }
    }
    return 0;
}