# include <iostream>
# define MAX 100010
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    if(s1=="0"||s2=="0") 
    {
        cout<<"0"<<endl;
        return 0;
    }

    int a1[MAX]={0},a2[MAX]={0},a[2*MAX]={0};
    //
    for(int i=s1.size()-1;i>=0;i--)
    {
        a1[s1.size()-1-i]=s1[i]-'0';
    }
    for(int i=s2.size()-1;i>=0;i--)
    {
        a2[s2.size()-1-i]=s2[i]-'0';
    }
    //
    int len1=s1.size(),len2=s2.size();
    int len=len1+len2;
    for(int i=0;i<len1;i++)
    {
        for(int j=0;j<len2;j++)
        {
            a[i+j]+=a1[i]*a2[j];
            if(a[i+j]>=10)
            {
                a[i+j+1]+=a[i+j]/10;
                a[i+j]%=10;
            }
        }
    }
    while(a[len-1]==0&&len-1>0)
    {
        len--;
    }
    if(len==0)
    {
        cout<<"0"<<endl;
    }
    for(int i=len-1;i>=0;i--)
    {
        cout<<a[i];
    }
    cout<<endl;
    return 0;
}