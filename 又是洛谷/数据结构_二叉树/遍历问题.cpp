# include <iostream>
# include <string>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    long long ans=1;
    for(int i=0;i<=s1.length()-2;i++)
    {
        for(int j=0;j<=s2.length()-1;j++)
        {
            if(s1[i]==s2[j])
            {
                if(s1[i+1]==s2[j-1]) ans*=2;
                break;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}