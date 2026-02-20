# include <iostream>
# include <string>
using namespace std;
string jieya()
{
    int k;
    char ch;
    string s="",str="";
    while(cin>>ch)
    {
        if(ch=='[')
        {
            cin>>k;
            str=jieya();
            while(k--)
            {
                s+=str;
            }
        }
        else if(ch==']')
        {
            return s;
        }
        else 
        {
            s+=ch;
        }
    }
    return s;
}

int main()
{
    cout<<jieya()<<endl;
    return 0;
}