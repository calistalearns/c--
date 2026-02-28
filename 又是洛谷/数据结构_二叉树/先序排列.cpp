# include <iostream>
# include <string>
# include <cstring>
using namespace std;
void dfs(string s1,string s2)
{
    if(s1.length()==0) return;
    int len=s1.length();
    char root=s2[len-1];
    int pos=s1.find(root);
    string s1l=s1.substr(0,pos),s1r=s1.substr(pos+1,len-pos-1);
    string s2l=s2.substr(0,pos),s2r=s2.substr(pos,len-1-pos);
    cout<<root;
    dfs(s1l,s2l);
    dfs(s1r,s2r);
}
int main()
{
    string s1,s2;//中序，后序
    cin>>s1>>s2;
    dfs(s1,s2);
    return 0;
}