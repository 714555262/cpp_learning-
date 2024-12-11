#include<iostream>
#include<string>
using namespace std;
//对象的初始化和清理
//构造函数和析构函数，分别用于初始化和清理操作
class Person{
public:
    //1.构造函数
    //没有返回值，不用写void
    //函数名和类名相同
    //构造函数可以有参数，可以发生重载
    //创建对象的时候，构造函数会自动进行调用，并且只调用一次
    Person(){
        cout<<"构造函数 is using "<<endl;
    }

    //2.析构函数 进行清理操作
    //没有返回值
    //函数名和类名相同 在函数前面加~
    //析构函数不可以加参数，不可以发生重载
    //对象在销毁前会自动调用该函数，只调用一次
    ~Person(){
        cout<<"析构函数 is using "<<endl;
    }
};
//构造函数和析构函数都是必须有的实现，如果自己不写编译器会提供一个空实现的构造和析构函数
void test01(){
    //Person p;//局部变量创建在栈上，函数执行完毕，会自动进行释放操作
}
int main(){
    //test01();
     Person p;
     system("pause");

return 0;
}