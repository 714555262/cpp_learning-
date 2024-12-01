#include<iostream>
using namespace std;
// 1.不要返回局部变量的引用
// int func(){
//     int a=10; 局部变量只存在于栈区
//     return a;
// }
//返回静态局部变量引用
int & func2(){
    static int a=10;//静态变量，存放在全局区，全局区的变量在程序结束后进行释放
    return a;
}
int main(){
    //引用做函数的返回值
    //1.不要返回局部变量的引用
    //int &ref=func();非法操作这是
    
    int &ref=func2();
    cout<<ref<<endl;
    // 2.函数的调用作为左值
    func2()=1000;
    cout<<"函数作为左值进行输出："<<func2()<<endl;
    cout << "ref进行输出：" << ref << endl;
    return 0;
}