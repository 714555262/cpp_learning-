#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<101;i++){
        if (i%10==7)
        {
            cout<<"敲桌子"<<endl;
        }else if(i/10==7){
            cout<<"敲桌子"<<endl;
        }else if(i%7==0){
            cout<<"敲桌字"<<endl;
        }else{
            cout << i << endl;
        }
        
    }
    return 0;
}