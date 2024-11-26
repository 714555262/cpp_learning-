#include <iostream>
using namespace std;
int main(){
    //指针和数组
    //利用指针访问数组中的元素
    int arr[5]={1,4,7,8,6};
    cout<<"访问数组中第一个元素："<<arr[0]<<endl;
    int *p=arr;//arr数组名就是数组的首地址
    cout<<"*P指针解引用来访问第一给元素："<<*p<<endl;
    p++;
    cout<<"指针访问数组第二个元素："<<*p<<endl;
    return 0;
}