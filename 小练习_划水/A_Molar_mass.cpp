#include <iostream>
#include <string>
#include <map>
using namespace std;
  map<char,double>m
    {
        {'C',12.01},
        {'H',1.008},
        {'O',16.00},
        {'N',14.01},
    };
int main()
{
    int T;cin>>T;
    while(T--)
    {
        string s;
        cin>>s;
        double ans=0.0;
        int len=s.size();
        for(int i=0;i<len;i++)
        {
            char ele=s[i];
            if(i+1<len&&s[i+1]>='0'&&s[i+1]<='9')
            {
                int count=0;
                int j=i+1;
                while(j<len&&s[j]>='0'&&s[j]<='9')
                {
                    count=(s[j]-'0')+count*10;
                    j++;
                }
                ans+=m[ele]*count;
                i=j-1;
            }
            else
            {
                ans+=m[ele];
            }
        }
        printf("%.3f\n",ans);
    }
    return 0;
}