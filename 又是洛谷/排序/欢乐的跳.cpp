# include <iostream>
# include <cmath>
# include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    if(n==1) 
    {
        cout<< "Jolly";
        return 0;
    }
    int a[n],b[n-1];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i+1<n;i++)
    {
        b[i]=abs(a[i]-a[i+1]);
    }
    sort(b,b+(n-1));
    for(int i=0;i+1<n;i++)
    {
        if(b[i]!=i+1)
        {
            cout<<"Not jolly";
            return 0;
        }
    }
    cout<<"jolly";
    return 0;
}