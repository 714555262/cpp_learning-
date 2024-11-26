#include <iostream>
using namespace std;
//指针和函数进行传地址进行数据交换
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a=10,b=55;
    swap(&a,&b);
    cout<<"使用指针进行交换后,两个数的值分别为: a= "<<a<<" b= "<<b<<endl;
    return 0;
}