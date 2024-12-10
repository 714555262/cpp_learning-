#include<iostream>
#include<string>
using namespace std;
//封装的权限
//公共，保护，私有三种权限
//公共public 成员在类内可以访问,类外可以访问
//保护protected 成员类内可以访问，类外不可以访问  儿子可以访问父亲中的保护内容
//私有 private 成员类内可以访问，类外不可以进行访问 儿子不可以访问父亲私有的内容
class person{
public:
    // 公共权限
    string name;
protected:
    //保护权限
    string car;
private:
    //私有权限
    int password;
public:
    void func(){
        name="xiaomi";
        car="su7";
        password=00001;
    }
    
};
int main(){
    //实例化具体对象
    person boss;
    boss.name="雷军";
    //boss.car="su7";//保护权限的内容，类外访问不到
    //boss.password=0001;//私有的权限类外访问不到



return 0;
}