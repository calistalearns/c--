# include <iostream>
# include <algorithm>
# include <queue>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    queue<int>b;
    b.push(arr[0]);
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=b.back())
        {
            b.push(arr[i]);
        }
    }
    cout<<b.size()<<endl;
    while(!b.empty())
    {
        cout<<b.front()<<" ";
        b.pop();
    }
    return 0;
}