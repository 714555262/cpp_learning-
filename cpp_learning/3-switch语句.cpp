#include<iostream>
using namespace std;
int main(){
    int flag=0;
    cout<<"请你为这部电影进行打分1-10"<<endl;
    cin>>flag;
    switch (flag)
    {
    case 1:
    case 2:
    case 3:
    case 4:
        cout<<"狗都不看"<<endl;
        break;
    case 5:
    case 6:
    case 7:
        cout << "还行" << endl;
        break;
    case 8:
    case 9:
    case 10:
        cout << "太好看了吧" << endl;
        break;
    default:
        cout<<"what are you fucking doing"<<endl;
        break;
    }
    return 0;
}