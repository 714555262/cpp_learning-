#include<iostream>
using namespace std;
//拷贝函数的调用时机
//使用一个已经创建完毕的对象来初始化一个新对象
//值传递方式给函数参数传值
//只返回局部对象
class person{
public:
      //默认构造
      person(){
        cout<<"person default is using"<<endl;
      }
      //有参构造
      person(int Age){
        age=Age;
        cout << "have num person default is using" << endl;
      }
      //拷贝构造
      person(person &p){
        age=p.age;
        cout << "copy person default is using" << endl;
      }
      //析构函数
      ~person()
      {
          cout << "~person default is using" << endl;
      }
    int age;
};
// 使用一个已经创建完毕的对象来初始化一个新对象
void test01(){
    person p1(20);
    person p2(p1);
}
// 值传递方式给函数参数传值
void test02()
{
    person p1(20);
    person p2(p1);
}
// 只返回局部对象
person dowork2(){
    person p1;
    return p1;
}
void test03(){
    person p=dowork2();
}
int main(){
    // test01();
    test03();
    return 0;
}