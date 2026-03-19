# include <iostream>
using namespace std;
int n;
string s;
void dfs(int x)
{
    if(x>n)
    {
        cout<<s<<endl;
        return;
    }
    //不选
    s+='N';
    dfs(x+1);
    s.pop_back();
    //选
    s+='Y';
    dfs(x+1);
    s.pop_back();
}
int main()
{
    cin>>n;
    dfs(1);
    return 0;
}