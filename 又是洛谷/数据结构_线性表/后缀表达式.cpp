# include <iostream>
# include <string>
# include <stack>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stack<int>st;
    int num=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='@')
        break;
        if(s[i]<='9'&&s[i]>='0')
        {
            num=num*10+(s[i]-'0');
        }
        else if(s[i]=='.')
        {
            st.push(num);
            num=0;
        }
        else
        {
            int result=0;

            int right=st.top();
                st.pop();
            int left=st.top();
                st.pop();
            switch(s[i])
            {
                case '+':
                    result=right+left;
                    break;
                case '-':
                    result=left-right;
                    break;
                case '/':
                    result=left/right;
                    break;
                case '*':
                    result=left*right;
                    break;
            }
            st.push(result);
        }
    }
    cout<<st.top()<<endl;
    return 0;
}