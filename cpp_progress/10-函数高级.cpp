#include<iostream>
using namespace std;
//函数默认参数,可以在定义函数的时候默认形参的参数值，如果传入参数用传入的参数，如果没有传入则使用默认参数
int func(int a,int b=20,int c=30){
   return a+b+c;
}
//如果某个位置已经默认参数，从这个位置往后都必须有默认参数
int func2(int a,int b=20,int c){
    return a+b+c;
}
//注意事项：如果函数声明存在默认参数，那么函数实现就不能有默认参数
//int func3(int a=10,int b=20,int c=30);
//函数声明和实现只能有一个有默认参数
int main(){
  cout<<func(10)<<endl;
 

  return 0;
}