#include<iostream>
using namespace std;
//函数重载，可以让函数名相同提高函数的复用性
void func(){
    cout<<" func is using"<<endl;
}
//函数重载的满足条件：
//同一个作用域下面
//函数名相同
//函数参数类型不同，或者个数不同，或者顺序不同
//函数的返回值不能进行函数的重载
void func(int a){
   cout<<" func is (int a) using "<<endl;
}
//顺序不同
void func(int a,double b)
{
    cout << " func is (int a,double b) using " << endl;
}
int main(){
  func();
  func(10);
  func(10,20.00);

  return 0;
}