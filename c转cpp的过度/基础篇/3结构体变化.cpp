# include <iostream>
using namespace std;
struct stu{
    string name;
    int age;
};
int main()
{
    stu a[100];//就不用写成 struct stu a[100]了
    return 0;
}