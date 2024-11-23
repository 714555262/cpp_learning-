#include <iostream>
using namespace std;
int main(){
    //三目运算符案例
    //创建三个变量a,b,c
    //将ab进行比较，将变量大的数值赋值给c
    int a=10;
    int b=20,c=0;
    c=(a>b?a:b);
    //c++里面三目运算符可以作为左值，进行赋值运算
    (a > b ? a : b)=100;
    cout<< "c的值为" << c << endl;
    cout << "a的值为" << a << endl;
    cout << "b的值为" << b << endl;
    return 0;
}