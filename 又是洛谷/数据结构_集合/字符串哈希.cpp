# include <iostream>
# include <string>
# include <unordered_set>
using namespace std;
int main()
{
    int n;
    cin>>n;
    unordered_set<string>zf;
    string z;
    for(int i=1;i<=n;i++)
    {
        cin>>z;
        zf.insert(z);
    }
    cout<<zf.size()<<endl;
    return 0;
}