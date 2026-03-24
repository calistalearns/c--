#include <iostream>

using namespace std;
int sum=0,n;
struct node{
    int dex,deep,hj,qz;
}arr[100005];
int main() {
    // 请在此处编写代码...
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i].qz;
    }
    int l,r;
    arr[1].hj=0;
    for(int i=1;i<=n;i++)
    {
        cin>>l>>r;
        if(l==-1&&r!=-1)//没左边
        {
            arr[r].hj=arr[i].hj-1;
        }
        else if(l!=-1&&r==-1)//没右边
        {
            arr[l].hj=arr[i].hj+1;
        }
        else if(l!=-1&&r!=-1)//都
        {
            arr[r].hj=arr[i].hj-1;
            arr[l].hj=arr[i].hj+1;
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(arr[i].hj==0)
        {
            sum+=arr[i].qz;
        }
    }
    cout<<sum<<endl;
    return 0;
}