#include <iostream>
#include<string>
using namespace std;
int main(){
    //创建二维数组；三行三列
    int scores[3][3]={
        {100,100,100},
        {90,50,100},
        {60,40,80}
    };
    //统计每个人的分数总和
    for (int  i = 0; i < 3; i++)
    {
        for (int j = 0; j< 3; j++)
        {
            cout<<scores[i][j]<<" ";
        }
        cout<<endl;
    }
    
    int sum=0;
    string names[3]={"张三","李四","王五"};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum+=scores[i][j];
        }
        cout<<names[i]<<"个人的总分为："<<sum<<endl;
    }
    
    return 0;
}