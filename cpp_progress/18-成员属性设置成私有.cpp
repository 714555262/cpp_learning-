#include<iostream>
#include<string>
using namespace std;
//成员属性设置成私有
//可以自己控制读写权限
//对于写可以检测数据有限性
class person{
public:
    //设置姓名
    void setName(string name){
        s_name=name;
    }
    //获取姓名
    string getName(){
        return s_name;
    }
    //获取年龄
    int getAge(){
        return age;
    }
    //设置年龄0-150
    void setAge(int Age){
        if (Age<0||Age>150)
        {
            cout<<"年龄："<<Age<<" ,你的年龄输入有误，赋值失败"<<endl;
            return ;
        }
        age=Age;
    }
    //设置偶像
    void setIdol(string Idol){
        idol=Idol;
    }
private:
    string s_name;//姓名  可读可写
    int age=18;    //年龄   只读  也可以写（年龄必须在0-150之间）
    string idol;//偶像  只写
};
int main(){
    person p;
    p.setName("张三");//可读可写
    p.setIdol("xiaomi");//只写状态，外界访问不到
    p.setAge(160);
    cout<<"姓名："<<p.getName()<<endl;
    cout<<"年龄："<<p.getAge()<<endl;

    return 0;
}