#include<iostream>
using namespace std;
int main(){
    //数组特点，放在一块连续的内存空间里面。每个元素都是相同的数据类型
    //数组的三种定义方式
    //1.数据类型 数组名 【数组长度】;
    int buffer[10]={0};
    cout<<"请输入你想创建的数组"<<endl;
    for (int  i = 0; i < 10; i++)
    {
        cin>>buffer[i];
    }

    for (int i = 0; i < 10; i++)
    {
        cout<<"数组里面的元素分别为：" <<buffer[i]<<endl;
    }
    //一维数组数组名的用途
    int arr[5]={1,2,3,4,5};
    cout<<sizeof(arr)<<endl;
    cout<<arr<<endl;
    cout<<&arr[1]<<endl;
    return 0;
}