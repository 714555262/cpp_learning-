#include <iostream>
using namespace std;
// 结构体指针
struct student{
    string name;//姓名
    int age;//年纪
    int score;//分数
};
int main(){
    //创建学生结构体变量
    struct student s={"wang",22,70};
    //通过指针来指向结构体变量
    struct student *p=&s;

    //通过指针访问结构体变量中的数据
    cout<<"姓名："<<p->name<<"年纪："<<p->age<<"分数："<<p->score<<endl;

    return 0;
}