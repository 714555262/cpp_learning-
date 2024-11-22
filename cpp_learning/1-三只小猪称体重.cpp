#include<iostream>
using namespace std;
int main(){
    int a=0;
    int b=0;
    int c=0;
    cout<<"请输入小猪a的体重"<<endl;
    cin>>a;
    cout << "请输入小猪b的体重" << endl;
    cin>>b;
    cout << "请输入小猪c的体重" << endl;
    cin>>c;
    cout<<"三只小猪的体重分别为"<<a<<","<<b <<","<<c<<endl;
    if (a>b)
    {
      if (a>c)
      {
        cout<<"a小猪体重最大"<<a<<endl;
      }else{
        cout<<"c小猪的体重最大"<<c<<endl;
      }
      
    }else{ //a<b
        if (b > c)
        {
            cout << "b小猪体重最大" << a << endl;
        }
        else
        {
            cout << "c小猪的体重最大" << c << endl;
        }
    }
    
    return 0;
}