# include <iostream>
# include <string>
# include <vector>
using namespace std;
int main()
{
    int n,m;//总人数和，轮到谁谁滚粗去
    cin>>n>>m;
    vector<int>v;
    for(int i=1;i<=n;i++)
    {
        v.push_back(i);
    }
    int index=0;
    while(!v.empty())
    {
        index=(index+m-1)%v.size();
        cout<<v[index]<<" ";
        v.erase(v.begin()+index);
    }
    return 0;
}