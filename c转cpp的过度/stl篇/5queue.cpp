# include <iostream>
# include <queue>
using namespace std;
int main()
{
    queue<int >q;
    for(int i=0;i<10;i++)
    {
        q.push(i);
    }
    cout<<"队首为："<<q.front()<<endl<<"队尾为："<<q.back()<<endl;
    q.pop();
    cout<<"队首为："<<q.front()<<endl<<"队尾为："<<q.back()<<endl;
    q.push(190);
    cout<<"队首为："<<q.front()<<endl<<"队尾为："<<q.back()<<endl;
    return 0;
}