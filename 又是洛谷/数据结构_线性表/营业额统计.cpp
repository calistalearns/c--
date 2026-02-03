# include <iostream>
# include <cmath>
# include <climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //排个序？
   int sum=0;
   for(int i=0;i<n;i++)
   {
    if(i==0) sum+=arr[i];
    else
    {
        int diffmin=INT_MAX;
        for(int j=0;j<i;j++)
        {
            int diff=abs(arr[i]-arr[j]);
            if(diff<diffmin)
            {
                diffmin=diff;
            }
        }
        sum+=diffmin;
    }
   }
   cout<<sum<<endl;
    return 0;
}