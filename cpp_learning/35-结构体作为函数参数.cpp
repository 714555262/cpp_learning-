#include<iostream>
#include<string>
using namespace std;
//定义学生结构体
struct student{
    string name;
    int age;
    int score;
};

//打印学生信息函数声明
void PrintStudent(struct student *p);
int main()
{
    //结构体做函数参数
    //将一个学生传入到一个参数里面，打印学生的所以信息。
    struct student s;
    s.name="张三";
    s.age=20;
    s.score=90;
    //调用函数
    PrintStudent(&s);
    
    cout<<"main函数中打印 姓名："<<s.name<<"年龄："<<s.age<<"分数："<<s.score<<endl;
    return 0;
}

void PrintStudent(struct student *p){
    p->age=200;
    cout << "PrintStudent函数中打印 姓名：" << p->name << " 年龄：" << p->age << " 分数：" << p->score << endl;
}