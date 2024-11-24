#include <iostream>
using namespace std;
int main(){
    //二维数组的名称用途
    //1.可以查看内存空间的大小
    int arr[2][3]={
        {1,2,3},
        {4,5,6}
    };
    cout<<"二维数组占用空间的大小为："<<sizeof(arr)<<endl;
    cout << "可以查看二维数组的首地址:" << sizeof(arr[0]) << endl;
    cout<<"二维数组可以查看第一个元素占用的内存为"<<sizeof(arr[0][0])<<endl;
    cout<<"二维数组的列数为："<<sizeof(arr[0])/sizeof(arr[0][0])<<endl;
    //可以查看二维数组的首地址
    cout<<"可以查看二维数组的首地址:"<<arr[0]<<endl;
    cout<<"二维数组第一行首地址："<<arr<<endl;
    cout<<"二维数组第二行的首地址为："<<arr[1]<<endl;
    cout<<"二维数组第一个元素的首地址："<<&arr[0][0]<<endl;
    return 0;
}