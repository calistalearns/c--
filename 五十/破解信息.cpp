#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string s;
int main()
{
    cin>>s;
    char ans=*max_element(s.begin(),s.end());
    int cnt=0;
    for(auto c:s)
    {
        if(c==ans) cnt++;
    }
    cout<<string(cnt,ans)<<endl;
    return 0;
}