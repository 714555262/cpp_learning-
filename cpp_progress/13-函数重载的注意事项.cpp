#include<iostream>
using namespace std;
//引用作为函数重载的条件
void func(int &a){
    cout<<"func (int &a)调用"<<endl;
}

void func(const int &a)
{
    cout << "func (const int &a)调用" << endl;
}
//函数重载碰到默认参数
void func2(int a){
    cout<<"func2 (int a) is suing "<<endl;
}

void func2(int a ,int b=10){
    cout << "func2 (int a,int b=10) is suing " << endl;
}
int main(){
  //若为变量则是调用变量的版本，若为常量则为常量的函数版本
  //const int a=10;
  int a=10;
  func(a);


  return 0;
}