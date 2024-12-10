#include<iostream>
using namespace std;
//函数的占位参数
//返回值类型 函数名（数据类型）{}

//目前阶段的占位参数无法进行使用，后面课程会对该技术进行使用
//占位参数也可以用默认参数
void func(int a,int=10 ){
    cout <<"this is func"<<endl;
}
int main(){
   func(10);
  

   return 0;
}