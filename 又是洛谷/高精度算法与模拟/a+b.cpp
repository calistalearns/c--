# include <iostream>
# include <string>
using namespace std;
int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    int a1[201]={0},a2[201]={0},a3[201]={0};

    for(int i=s1.size()-1;i>=0;i--)
    {
        a1[s1.size()-1-i]=s1[i]-'0';
    }
    //
    for(int i=s2.size()-1;i>=0;i--)
    {
        a2[s2.size()-1-i]=s2[i]-'0';
    }

    int len=(s1.size()>s2.size()?s1.size():s2.size());
    for(int i=0;i<len;i++)
    {
        a3[i]+=a1[i]+a2[i];
        if(a3[i]>=10)
        {
            a3[i+1]=a3[i+1]+a3[i]/10;
            a3[i]%=10;
        }
    }

    if (a3[len] > 0) {
        len++; // 结果长度增加一位
    }

    for(int i=len-1;i>=0;i--)
    {
        cout<<a3[i];
    }
    cout<<endl;
    return 0;
}