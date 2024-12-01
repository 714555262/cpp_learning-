#include <iostream>
using namespace std;
//全局变量和静态变量的地址放在全局区里面,在一个区域段里面

//全局变量
int g_a=10;
int g_b=10;
//const修饰的全局变量
const int c_g_a=10;

int main(){
    //全局区

    //全局变量，静态变量，常量

    //创建普通局部变量
    int a=10;
    int b=10;
    cout<<"局部变量a的地址位："<<&a<<endl;
    cout<<"局部变量b的地址位："<<&b<<endl;
    cout << "全局变量b的地址位：" << &g_a << endl;
    cout << "全局变量b的地址位：" << &g_b << endl;
    //静态变量
    static int s_a=10;
    static int s_b = 10;
    cout << "静态变量b的地址位：" << &s_a << endl;
    cout << "静态变量b的地址位：" << &s_b << endl;
    //常量：字符串常量和const修饰的变量
    const int c_s=10;
    cout<<"字符串常量的地址："<<&"hello world"<<endl;
    cout << "const修饰的变量：" << &c_s << endl;
    cout << "const修饰的全局常量：" << &c_g_a<< endl;
    return 0;
}