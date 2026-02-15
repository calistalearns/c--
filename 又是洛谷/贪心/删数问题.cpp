# include <iostream>
# include <string>
using namespace std;
int main()
{
    string n;
    int k;
    cin>>n>>k;
    int i=0;
    while(k>0&&i+1<n.size())
    {
        if(n[i]>n[i+1])
        {
            n.erase(i,1);
            k--;
            if(i>0)i--;
        }
        else
        i++;
    }
    if(k>0)
    {
        n.resize(n.size()-k);
    }
    while (n[0] == '0' && n.size() > 1)
        n.erase(0, 1);//前导零
    cout<<n<<endl;
    return 0;
}