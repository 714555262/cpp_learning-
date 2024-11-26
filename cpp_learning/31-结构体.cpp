#include<iostream>
#include<string>
using namespace std;

//自定义数据类型，一些类型集合组成的类型集合
struct student
{
    //成员列表
    string name; //姓名
    int age;  //年纪
    int score; //分数
};
int main(){

    //struct关键字在c++里面是可以省略的
    struct student wang;
    wang.name="张三";
    wang.age=17;
    wang.score=1000;
    cout<<wang.age<<endl;
    return 0;
}