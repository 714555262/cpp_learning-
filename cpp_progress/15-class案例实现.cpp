#include<iostream>
#include<string>
using namespace std;
//创建一个学生类，属性有学生名和学号，可以给姓名和学号进行赋值操作，可以显示学生的姓名和学号
//创建学生类
class student{
    //设计权限
public:
    //设置属性,成员
    string name;
    string num;
    
    //显示学生的姓名和学号
    void student_Value(){
        cout<<name<<" "<<num<<endl;
    }

};
int main(){
   //创建一个具体学生，实例化对象
   student w1;
   //给具体对象进行赋值操作
   w1.name="xiaomi";
   w1.num ="199999";
   //显示学生的信息
   w1.student_Value();


  return 0;
}