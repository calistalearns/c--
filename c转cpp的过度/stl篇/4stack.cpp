# include <iostream>
# include <stack>
using namespace std;
int main()
{
    stack<int >s;
    s.push(2);
    s.push(1);
    s.push(4);
    cout<<"栈顶为："<<s.top()<<endl;
    cout<<"栈的总长度为："<<s.size()<<endl;
    return 0;
}