#include<iostream>
using namespace std;
int main(){
    int arr[5]={150,250,775,456,378};
    int max = arr[0],flag=0;
    for (int  i = 0; i < 5; i++)
    {
        
        if (max<arr[i])
        {
            max=arr[i];
            flag=i+1;
        }
        
    }
    cout<<"第"<<flag<<"小猪的体重最大"<<max<<endl;
    
    return 0;
}