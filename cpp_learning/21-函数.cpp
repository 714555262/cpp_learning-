#include<iostream>
using namespace std;

// int sum(int a,int b){
//     int sum=a+b;
//     return sum;
// }
//sum函数声明
int sum(int a,int n);

int main(){
    int num1,num2;
    cout<<"请输入你要相加的两个数："<<endl;
    cin>>num1;
    cin>>num2;
    //main函数里面num1和num2被称作为实际参数，函数里面的被叫做为形式参数
    cout<<"两数之和为："<<sum(num1,num2)<<endl;
    return 0;
}
//自定义函数完成两数相加
int sum(int a, int b)
{
    int sum = a + b;
    return sum;
}
