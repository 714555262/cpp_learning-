#include <iostream>
using namespace std;
//函数的常见样式
//1.无参数无返回值
void test1(){
    cout<<"this is test1"<<endl;
}
//2有参无返回值
void test2(int a){
    cout<<"this is test2,a="<<a<<endl;
}
//3.无参数有返回值
int test3(){
    return 6;
}
//4.有参数有返回值
int test4(int a,int b){
    //三目运算符，判断a>b,如果是则返回a,否则返回b。
    return  a>b?a:b;
}
int main(){
    test1();
    test2(100);
    cout<<"this is test3,is return = "<<test3()<<endl;
    cout << "三目运算符比较两个数的大小，a>b?a:b，最后的结果为：" << test4(44, 55) << endl;
    return 0;
}
//函数声明可以写多次，但是函数的定义只能写一次
//关于函数的分文件编写，