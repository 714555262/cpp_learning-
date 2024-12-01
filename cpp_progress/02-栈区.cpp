#include<iostream>
using namespace std;
//栈区的注意事项--不要返回局部变量的地址
//栈区的数据有编译器管理开辟和释放
int *func(){
    int a=10;//局部变量放在栈区，栈区的数据在函数执行完后会自动进行释放
    return &a;//返回局部变量的地址
}
int main(){
    //指针来接收函数的返回值
    int *p=func();
    cout<< *p <<endl;//第一次可以正确打印正确的数字，编译器进行了保留
    cout << *p << endl;//第二次这个数据就不再进行保留了
    return 0;
}