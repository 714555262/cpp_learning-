#include<iostream>
using namespace std;
/**
 * 构造函数的分类和调用
 * 分类  无参数构造（默认构造函数） 和 有参数构造
 *       按照类型进行分类 普通构造     拷贝构造
 * 
 */
class Person
{
public:
    // 1.构造函数
    // 没有返回值，不用写void
    // 函数名和类名相同
    // 构造函数可以有参数，可以发生重载
    // 创建对象的时候，构造函数会自动进行调用，并且只调用一次
    Person()
    {
        cout << "构造函数 is using " << endl;
    }

    //有参构造
    Person(int a){
        age=a;
        cout<<"有参构造 is using "<<endl;
    }

    //拷贝构造函数
    Person(const Person &p){
        //将传入的人身上的所有属性，拷贝到我身上
        age=p.age;
        cout<<"拷贝构造 is using"<<endl;
    }

    ~Person()
    {
        cout << "析构函数 is using " << endl;
    }
    //成员变量
    int age;
};
//调用
void test01(){
    //1.括号法
    // Person p;//默认构造函数调用
    // Person p1(10);//有参函数调用
    // Person p2(p1);//拷贝构造函数
    //注意事项；调用默认构造函数的时候不要加(),会被编译器误认为是一个函数声明，不会被认为在创建对象
    // cout<<"p1 年龄="<<p1.age<<endl;
    // cout<<"p2 年龄="<<p2.age<<endl;

    //显示法P
     Person p1;
     Person p2=Person(10);//有参构造
     Person p3=Person(p2);//拷贝构造

     //Person(10);//匿名对象 特点：当前执行结束后，系统会立即回收掉匿名对象
     //注意事项二，不要利用拷贝构造函数 来初始化匿名对象  编译器会认为 Person (p3)==Person p3;

    //隐式转换法
    Person p4=10; //相当于 person p4=person(10);
    Person p5=p4; //相当于拷贝构造
} 
int main(){
    test01();

    system("pause");

return 0;
}