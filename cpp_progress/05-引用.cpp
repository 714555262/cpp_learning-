#include<iostream>
using namespace std;
//引用的基本语法
//引用给变量起别名：数据类型 &别名=原名
//引用必须要初始化，一旦初始化后就不可以更改
int main(){
   int a=10;
   int &b = a;
   cout <<"此时a="<< a << endl;
   cout << "此时b=" << b << endl;
   b=20;
   cout<<b<<endl;
   //注意事项
   

   return 0;
}