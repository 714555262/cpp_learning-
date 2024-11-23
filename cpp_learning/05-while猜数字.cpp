#include <iostream>
using namespace std;
int main(){
    //系统生成随机数
    int num = rand()%100;//生成1~99之间的随机数
    int count=0;
    cout<<"你有5次机会来猜这个数字"<<endl;
    while(count<5){
        int guess;
        cout<<"请输入你猜的数字："<<endl;
        cin>>guess;
        if(guess==num){
            cout<<"恭喜你猜对了"<<endl;
            break;
        }else if(guess<num){
            cout<<"你猜小了"<<endl;
        }else{
            cout<<"你猜大了"<<endl;
        }
        count++;
        
    }

    return 0;
}