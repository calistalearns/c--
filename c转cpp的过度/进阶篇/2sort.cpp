# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;
int main()
{
    vector <int>v(10);
    for(int i=10;i>0;i--)
        v[10-i]=i;
    cout<<"存储时是从大到小";
    for(int i=0;i<10;i++)
        cout<<v[i]<<" ";
    cout<<endl;

    sort(v.begin(),v.end());
    cout<<"利用sort，从小到大了";
    for(int i=0;i<10;i++)
        cout<<v[i]<<" ";
    return 0;
}
