#include<iostream>
using namespace std;
//值传递案例:值传递的时候形参不论发生任何改变都不会影响实参
void swap(int num1,int num2){
    cout<<"交换前："<<endl;
    cout<<"num1 = "<<num1<<endl;
    cout<<"num2 = "<<num2<<endl;
    int temp=num1;
    num1=num2;
    num2=num1;
    //返回值不需要的时候可以不写return 

}
int main(){
    cout<<"请输入想要进行交换的两个数字："<<endl;
    int a,b;
    cin>>a;
    cin>>b;
    swap(a,b);
    cout<<"交换后的结果:a="<<a<<" b="<<b<<endl;
    return 0;
}