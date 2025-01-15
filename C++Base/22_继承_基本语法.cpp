#include<iostream>
using namespace std;
class BasePage
{
public:
    void header()
    {
        cout<<"首页，公开课，登陆，注册"<<endl;
    }

    void footer()
    {
        cout<<"帮助，交流，合作中心"<<endl;
    }

    void left()
    {
        cout<<"Java,Python,C++..."<<endl;
    }

};

class Java : public BasePage
{
public:

    void content()
    {
        cout<<"This is Java!"<<endl;
    }
};

class Python : public BasePage
{
public:

    void content()
    {
        cout<<"This is Python!"<<endl;
    }
};

void test01()
{
    cout<<"Java 页面 如下 :"<<endl;
    Java J;
    J.header();
    J.left();
    J.content();
    J.footer();
}

void test02()
{
    cout<<"Python 页面 如下 :"<<endl;
    Python py;
    py.header();
    py.left();
    py.content();
    py.footer();

}
int main()
{
    test01();
    cout<<endl;
    test02();

    return 0;
}