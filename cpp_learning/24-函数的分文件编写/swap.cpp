#include "swap.h"
using namespace std;
void swap(int num1, int num2){
    cout << "交换前：" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    int temp = num1;
    num1 = num2;
    num2 = num1;
}