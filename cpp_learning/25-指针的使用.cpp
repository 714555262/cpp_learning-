#include<iostream>
using namespace std;
int main(){
    //指针的使用,指针就是一个地址
    int a=100;
    //指针定义的语法： 数据结构*指针变量名：让指针记录变量的地址
    int *p=&a;
    cout<<"指针的地址为："<<p<<endl;
    cout<<"变量a的地址"<<&a<<endl;
    cout<<*p<<endl;//指针的解引用
    *p=1000;
    cout<<*p<<endl;
    //指针所占的内存空间
    cout<<"*p占用的内存空间:"<<sizeof(*p)<<endl;
    cout << "p占用的内存空间:" << sizeof(p) << endl;
    cout<<"sizeof(int *)内存："<<sizeof(int *)<<endl;
    cout << "sizeof(char *)内存：" << sizeof(char*) << endl;
    return 0;
}