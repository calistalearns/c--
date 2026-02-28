# include <iostream>
# include <algorithm>
using namespace std;
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[m];
    for(int i=0;i<m;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+m);
    for(int i=0;i<m;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}