# include <iostream>
# include <string>
using namespace std;
void dfs(string s1,string s2)
{
    char root =s2[0];
    int l=s1.find(root),r=s1.size()-l-1;
    if(l)
    {
        string s1_l=s1.substr(0,l),s2_l=s2.substr(1,l);
        dfs(s1_l,s2_l);
    }
    if(r)
    {
        string s1_r=s1.substr(l+1,r),s2_r=s2.substr(l+1,r);
        dfs(s1_r,s2_r);
    }
    cout<<root;
}   
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    dfs(s1,s2);
    return 0;
}