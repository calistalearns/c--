# include <iostream>
# include <cctype>
using namespace std;
int main()
{
    char c='A';
    cout<<"是字母吗？"<<" "<<isalpha(c)<<endl;
    cout<<"是特殊字符吗？"<<" "<<isspace(c)<<endl;
    cout<<"是小写字母吗？"<<" "<<islower(c)<<endl;
    cout<<"是大写字母吗？"<<" "<<isupper(c)<<endl;
    cout<<"是数字或者字母吗？"<<" "<<isalnum(c)<<endl;

    char s1=toupper(c),s2=tolower(c);

    cout<<"转化为大写"<<" "<<s1<<endl;
    cout<<"转化为小写"<<" "<<s2<<endl;
    return 0;
}