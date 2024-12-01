#include<iostream>
using namespace std;
//堆区又程序员进行分配和释放，如果程序员不进行释放，程序结束时候由操作系统进行回收操作
//cpp中主要使用new在堆区进行开辟内存
int *func(){
    //利用new关键字，可以将数据开辟到堆区。
    //指针本身在栈区，但是保存的数据在堆区里面。
    int *p=new int(10);
    return p;
}
int main(){
    //在堆区开辟数据
    int *p=func();
    cout<<*p<<endl;
    return 0;
}