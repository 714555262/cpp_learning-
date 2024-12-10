#include<iostream>
using namespace std;
//cpp三大特性，封装继承和多态
//封装的意义
/*
将属性和行为作为一个整体，表现生活中的事物
*/
//设计一个圆类求圆的周长 周长：ΠD
const double PI=3.14;
//设计一个类，后面紧跟着就是类的名称
class Circle{
    //访问权限
    //公共权限
public:
    //属性
    //半径
    int m_r;

    //行为
    //获取圆形的周长
    double calculateZc(){
        return 2*PI*m_r;
    }

};
int main(){
    //通过圆形class来创建一个具体的对象
    //实例化，通过一个类来实例化一个对象的操作叫做实例化
    Circle c1;
    // 给圆的对象的属性进行赋值操作
    c1.m_r=10;
    //圆对象调用函数来实现求值操作
    cout<<"圆的周长为："<<c1.calculateZc()<<endl; 


    return 0;
}