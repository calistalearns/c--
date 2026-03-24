#include <stdio.h>

int main() {
    // 请在此处编写代码...
    int n,k;//一个小时有n分钟
    scanf("%d %d",&n,&k);
    //多了一个1
    //什么时候变成零,n为5，就变4
    //就是又可以加1，又能加k呗
    int count[100]={0};
    int countmax=n-1;//全加1的情况
    int now=n;
    int start=0;
    int end=n-1;
    int j=0;
    for(int i=0;i<=countmax;i++)
    {
        int result=(start+i*k+(countmax-1))%n;
        if(result==end)
        {
            count[j]=i;
            j++;
        }
    }
    int min=count[0];
    for(int i=1;i<j;i++)
    {
        if(count[i]<min)
        {
            min=count[i];
        }
    }
    printf("%d\n",min);
    return 0;
}