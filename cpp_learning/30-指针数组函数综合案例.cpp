#include<iostream>
using namespace std;
//案例描述：封装一个函数，使用冒泡排序，实现对整数数组的升序排序
void bubbleSort(int *arr,int len){
  for (int i = 0; i < len-1; i++)
  {
     for (int j = 0; j < len-i-1; j++)
     {
        if (arr[j]>arr[j+1])
        {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
        
     }
     
  }
  
}
int main(){
    //创建一个数组
    int arr[10]={1,7,2,4,3,9,10,6,5,14};
    //数组长度
    int len=sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,len);
    for (int i = 0; i < len; i++)
    {
        cout<<"冒泡排序后的数据为："<<arr[i]<<endl;
    }
    
    return 0;
}