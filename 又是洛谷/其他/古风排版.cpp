# include <iostream>
# include <string>
# include <cstring>
using namespace std;
string s;
const int N=1005;
int n;
char arr[N][N];
int main()
{
    cin>>n;
    cin.ignore();
    getline(cin,s);
    memset(arr,' ',sizeof(arr));
    int l=(s.size()+n-1)/n;
    int x=1,y=l;
    for(int i=0;i<s.size();i++)
    {
        arr[x][y]=s[i];
        x++;
        if(x>n)
        {
            x=1,y--;
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=l;j++)
            {
                cout<<arr[i][j];
            }
            cout<<endl;
    }
    return 0;
}