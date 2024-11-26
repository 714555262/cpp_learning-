#include<iostream>
#include<string>
using namespace std;
// 定义学生结构体
struct student
{
    string name;
    int age;
    int score;
};
//打印学生信息函数声明
void PrintStudent( const student *p);

int main()
{
    //结构体中const使用场景

    //创建结构体变量
    struct student s={"张三",19,56};
    //通过函数打印结构体信息
    PrintStudent(&s);
}
//将函数中的形参改成指针，可以减少内存空间，而且不会复制新的副本出来
void PrintStudent( const student *p)
{
    //p->age=200;
    cout << "PrintStudent函数中打印 姓名：" << p->name << " 年龄：" << p->age << " 分数：" << p->score << endl;
}