# include <iostream>
using namespace std;
int main()
{
    string s,s1,s2;
    cin>>s1;
    cin>>s2;
    s=s1+s2;
    cout<<s<<endl;
    cout<<"��??��?��??��"<<endl;
    cin.ignore(256,'\n');//getchar()����??��??��������??����??��?
    getline(cin,s);//空格也能读取
    cout<<s<<endl;
    cout<<s.length()<<endl;
    cout<<"������������?"<<endl;
    string s3=s.substr(4);//����??4,2��������??��??��?��������??
    cout<<s3<<endl;//����?����???������?
    return 0;
    //�������ˡ�ȫû�˿�
}