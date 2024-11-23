#include<iostream>
using namespace std;
int main(){
    //continue跳过本轮循环，进入下一次循环
    for(int i=0;i<10;i++){
        if(i%2==0){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}