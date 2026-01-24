# include<stdio.h>
int arr[2000000];
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int index;
    for(int i=0;i<m;i++)
    {
        scanf("%d",&index);
        printf("%d\n",arr[index-1]);
    }
    return 0;
}