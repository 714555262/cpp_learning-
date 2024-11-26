#include <iostream>
using namespace std;
int main(){
    //const修饰指针，常量指针：指针的指向可以改变，但是指针指向的值不可以改变
    int a=100;
    int b=10;
    const int *p=&a;
    //*p=20就是一个错误a
    p=&b;

    //指针常量:指针的指向不可以改变，但是指针指向的值可以改变
    int *const p1=&a;
    *p1=20;
    //p1=&b,指针指向不可以修改

    //3.const修饰指针和常量:指针的指向和指向的值都不可以进行修改
    const int * const p3=&a;
    return 0;
}