# include <iostream>
# include <queue>
using namespace std;
//不在内存里，才要查字典
bool find(queue<int> s,int target)
{
    while(!s.empty())
    {
        if(s.front()==target)
        {
            return 1;
        }
        s.pop();
    }
    return 0;
}

int main()
{
    int n,m;
    cin>>m>>n;//内存容量，单词数量
    queue<int> s;
    int count=0;//计数
    int word;
    for(int i=0;i<n;i++)
    {
        cin>>word;
        if(!find(s,word))
        {
            count++;
            if(s.size()>=m)
            {
                s.pop();
            }
            s.push(word);
        }
    }
    cout<<count<<endl;
    return 0;
}