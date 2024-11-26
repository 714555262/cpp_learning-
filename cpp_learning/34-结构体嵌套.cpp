#include<iostream>
#include<string>
using namespace std;
//创建一个student结构体
struct student
{
    string name;
    int age;
    int score;
};
//创建一个teacher结构体
struct teacher{
    int id;     //教师编号
    string name;//姓名
    struct student stu;//学生
};

// struct student{
//     string name;
//     int age;
//     int score;
// };
int main(){
    teacher t;
    t.name="peter";
    t.id=0001;
    t.stu.name="张三";
    t.stu.age=18;
    t.stu.score=90;
    cout<<"老师姓名:"<<t.name<<endl;
    return 0;
}