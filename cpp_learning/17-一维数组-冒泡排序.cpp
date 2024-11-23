#include <iostream>
using namespace std;
int main(){
    int arr[10]={25,45,71,46,89,21,47,366,96,57};
    for(int i;i<10-1;i++){
        for (int j = 0; j < 10-1-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            
        }
        
    }
    cout<<"排序后的数组"<<endl;
    for(int i=0;i<10;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}