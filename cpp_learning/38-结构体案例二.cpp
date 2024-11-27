#include<iostream>
#include<string>
using namespace std;

//创建一个hero结构体
struct hero{
    string name;//姓名
    int age;//年纪
    string sex;//性别
};

//自定义函数声明
void bubbleSort(struct hero Harr[], int len);
void printf(const hero Harr[], int len);

int main()
{
    struct hero Harr[5] = {
        {"刘备", 23, "男"},
        {"关羽", 22, "男"},
        {"张飞", 20, "男"},
        {"赵云", 21, "男"},
        {"貂蝉", 19, "女"},
        
    };
    int len=sizeof(Harr)/sizeof(Harr[0]);
    cout<<"排序前的顺序："<<endl;
    printf(Harr,len);
    //排序后
    cout<<endl;
    bubbleSort( Harr, len);
    cout<<"排序后的顺序:"<<endl;
    printf(Harr,len);
    return 0;
}

//创建函数按照年纪升序排序
void bubbleSort( struct hero Harr[],int len){
    for (int i = 0; i < len-1; i++)
    {
        for (int j = 0; j < len-i-1; j++)
        {
            if (Harr[j].age>Harr[j+1].age)
            {
                struct hero temp=Harr[j];
                Harr[j]=Harr[j+1];
                Harr[j+1]=temp;
            }
            
        }
        
    }
    
}

void printf(const struct hero Harr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "姓名：" << Harr[i].name << "年龄： " << Harr[i].age << "性别：" << Harr[i].sex << endl;
    }
}