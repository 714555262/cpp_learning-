#include<iostream>
using namespace std;
//struct和class的区别
//cpp中两者的区别在于，struct的权限是公共public,class的权限是私有private
//创建一个类
class c1{
    int m_a;

};
//创建一个结构体
struct c2{
    int m_a;
};
int main(){
    //c1 cc0;
    //cc0.m_a=2;//class默认私有权限，不能类外访问
    c2 cc1;
    cc1.m_a=2;//struct默认公共权限，可以进行类外访问


return 0;
}