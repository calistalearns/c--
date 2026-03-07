# include <iostream>
# include <string>
# include <map>
using namespace std;
char zf;
string s,s1;
map<string,string>m;
string find(string a)
{
    if(a!=m[a]) return find(m[a]);
    else return a;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>zf;
    while(zf!='$')
    {
        cin>>s;
        if(zf=='#')//父亲
        {
            s1=s;
            if(m.find(s) == m.end()) m[s] = s;
        }
        else if(zf=='+')//儿子
        {
            if(m.find(s) == m.end()) m[s] = s;
            m[s]=s1;
        }
        else if(zf=='?')//找祖先
        {
            string f=find(s);
            cout<<s<<" "<<f<<endl;
        }
        cin>>zf;
    }
    
    return 0;
}