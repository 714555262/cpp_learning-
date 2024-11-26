#include<iostream>
#include<string>
using namespace std;
//创建一个结构体
struct student{
    string name;
    int age;
    int score;
};
int main(){
    //在c++中struct关键字可以省略
    //创建一个结构体数组
    struct student arr[3]={
        {"张三",20,75},
        {"李四",21,88},
        {"王五",25,99}
    };
    for (int  i = 0; i < 3; i++)
    {
        cout<<arr[i].name<<" "<<arr[i].age<<" "<<arr[i].score<<endl;
    }
    
    return 0;
}