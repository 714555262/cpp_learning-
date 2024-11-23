#include<iostream>
using namespace std;
int main(){
    int num=100;
    do{
       int i=num%10;//获取三位数的个位
       int j=num/10%10;//获取三位数的百位
       int k=num/100;//获取三位数的千位
       if(i*i*i+j*j*j+k*k*k==num){
        cout<<num<<"是水仙花数"<<endl;
       }
       num++;
    }while(num<1000);

    return 0;
}