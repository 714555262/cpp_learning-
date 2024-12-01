#include<iostream>
using namespace std;
// 使用delete关键字进行释放操作
//  1.new的基本语法
int *func(){
    //在堆区创建整型数据
    //new返回是 该数据类型的指针
    int *p=new int(10);
    return p;
}
void test(){
    int *p = func();
    cout << *p << endl;
    cout << *p << endl;
    cout << *p << endl;
    delete p;
    cout << *p << endl;//此时内存已经释放，造成非法访问
}
void test02(){
    //在堆区创建整数数组
    //new返回是内存空间的首地址
    int *arr =new int[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i]=i+100;//给数组中的元素进行赋值操作

    }
    for (int i = 0; i < 10; i++)
    {
        cout<<"将数组中的元素依次进行打印操作："<<"第"<<i<<"个元素"<<arr[i]<<endl;
    }
    
    //释放堆区的数组,释放数组时候，需要添加一个中括号进行提示，说明释放的是数组
    delete[] arr;

}
int main(){
    test();
    test02();
    return 0;
}