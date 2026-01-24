# include <iostream>
using namespace std;
struct cap
{
    int time,people;
    int con[10000];
};
int main()
{
    int n;
    cin>>n;
    cap arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].time>>arr[i].people;
        for(int j=0;j<arr[i].people;j++)
        {
            cin>>arr[i].con[j];
        }
        
    }
    return 0;
}