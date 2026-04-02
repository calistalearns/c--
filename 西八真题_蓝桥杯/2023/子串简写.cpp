#include <iostream>
#include <string>
using namespace std;
string s;
int k;
char c1,c2;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long cnt=0;
    cin>>k;
    cin>>s>>c1>>c2;
    int n=s.size();
    int a[n+1]={0};
    for(int i=n-1;i>=0;i--)
    {
        a[i]=a[i+1];
        if(s[i]==c2) a[i]++;
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]==c1)
        {
            int j=i+k-1;
            if(j<n) cnt+=a[j];
        }
    }
    cout<<cnt<<endl;
    return 0;
}