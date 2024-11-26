#include<iostream>
#include<string>
using namespace std;
//创建学生结构体
struct student{
    string name; //姓名
    int score;//分数
};
//创建老师结构体
struct teacher{
    string name;//老师姓名
    struct student stu[3];//学生数组
};
//函数声明
void allocateSpace(struct teacher Tarr[], int len);
void printInfo(struct teacher Tarr[], int len);
int main()
{
    //创建三名老师的数组
    struct teacher Tarr[3];
    //通过函数给三名老师的信息赋值，并给老师带的学生信息赋值
    int len=sizeof(Tarr)/sizeof(Tarr[0]);
    allocateSpace(Tarr,3);
    //打印所有信息
    printInfo(Tarr,len);
    return 0;
}

//给老师和学生赋值的函数
void allocateSpace(struct teacher Tarr[],int len){
    string NameSeed ="ABCDE";
   //给老师进行赋值
   for (int  i = 0; i < len; i++)
   {  
      Tarr[i].name="Teachar_";
      Tarr[i].name+=NameSeed[i];
      //通过循环给没名老师带的学生赋值
      for (int j = 0; j < 3 ; j++)
      {
        Tarr[i].stu[j].name="Student_";
        Tarr[i].stu[j].name+=NameSeed[j];

        Tarr[i].stu[j].score=60;
      }
      
   }
   
}

//打印所有信息
void printInfo(struct teacher Tarr[],int len){
   for (int i = 0; i < len; i++)
   {
      cout<<"老师姓名："<<Tarr[i].name<<endl;
      for(int j=0; j<3 ;j++){
        cout<<"学生姓名："<<Tarr[i].stu[j].name<<
            "考试分数："<<Tarr[i].stu[j].score<<endl;
      }
   }
   
}