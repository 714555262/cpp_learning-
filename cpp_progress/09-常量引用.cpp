#include<iostream>
using namespace std;
//常量引用：主要用来修饰形参，防止误操作
//在函数形参列表中，可以加const修饰形参，防止形参改变实参
//发现是引用 ，转换为 int *const ref=&a;  指针常量
//常量引用:用来防止修饰形参
void showValue(const int &v){
    //v+=10
    cout<<v<<endl;
}
int main(){
   //int &ref=10;引用本身需要一个合法的内存空间，
   int a=10;
   int &ref=a;//引用必须是一块合法的内存空间
   showValue(ref);


return 0;
}