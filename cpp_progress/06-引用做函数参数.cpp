#include<iostream>
using namespace std;
//引用做函数参数传递
//1.值传递
void data_swap(int a,int b){
   int temp=a;
   a=b;
   b=temp;
   
}
//2.地址传递
void add_swap(int *a,int *b){
   int temp=*a;
   *a=*b;
   *b=temp;
}
//3.引用传递
void use_swap(int &a,int &b){
   int temp=a;
   a=b;
   b=temp;
}
int main(){
    int a=10;
    int b=20;
    data_swap(a,b);
    cout<<"值传递"<<endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout<<endl;
    add_swap(&a, &b);
    cout<<"地址传递"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    a=10,b=20;
    cout << endl;
    use_swap(a, b);
    cout << "引用传递" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}