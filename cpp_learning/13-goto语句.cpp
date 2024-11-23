#include<iostream>
using namespace std;
int main(){
    //goto语句案例，跳到你标记的地方
    for (int i = 0; i < 10; i++)
    {
        if (i==5)
        {
            goto flag;
        }
        cout<<"当前循环的时间:"<<i<<endl;
        
    }
    flag:
    cout<<"空间跳跃"<<endl;
    
    return 0;
}