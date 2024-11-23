#include<iostream>
using namespace std;
int main(){
    //数组元素逆置
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout<<"你输入的数组为"<< arr[i]<<endl;
    }
    for (int j = 0; j < 10/2+1; j++)
    {
        int flag=arr[j];
        arr[j]=arr[10-j-1];
        arr[10-j-1]=flag;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << "逆置后的数组为" << arr[i] << endl;
    }
    return 0;
}