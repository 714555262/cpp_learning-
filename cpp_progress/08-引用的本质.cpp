#include<iostream>
using namespace std;
//发现是引用，转换成int *const ref =&a;
void func(int &ref){
    ref=100;//ref是引用，转化成*ref=100;
}
int main(){
    int a=10;

    //自动转换成 int *const ref=&a;指针常量是指针指向不可以改变，也说明为什么引用不可以改变
    int &ref=a;
    ref=20;//内部发现是引用，自动帮我们转化成 *ref=20;
    cout<<"a:"<<a<<endl;
    cout<<"ref:"<<ref<<endl;

    func(a);
    return 0;
}