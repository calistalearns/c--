# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr.begin(),arr.end(),[](const string &a,const string &b)
    {
        return a+b>b+a;
    });
    string result;
    for(int i=0;i<n;i++)
    {
        result+=arr[i];
    }
    cout<<result<<endl;
    return 0;
}