#include<iostream>
#include<string>
using namespace std;
//设计立方体类
//设计cube类，求出立方体的面积和体积，分别用全局函数和成员函数判断两个立方体是否相等
//1.创建立方体类
//2.设计属性
//3.设计行为，获取立方体的面积和体积
//4.分别利用全局函数和成员函数 判断两个立方体是否相等
class Cube{
    //设置公共权限
public:
//设计行为
    //设置长
    void setLong(int Long){
        c_long=Long;
    }
    //获取长
    int getLong(){
        return c_long;
    }
    //设置宽
    void setWide(int Wide)
    {
        c_wide = Wide;
    }
    //获取宽
    int getWide(){
        return c_wide;
    }
    //设置高
    void setHight(int Hight)
    {
        c_hight = Hight;
    }
    //获取高
    int getHight(){
        return c_hight;
    }
    // 计算面积
    int cubeMS()
    {
        int ms = c_long * c_wide + c_long * c_hight + c_wide * c_hight;
        return 2 * ms;
    }
    // 计算体积
    int cubeMV()
    {
        return c_hight * c_long * c_wide;
    }
    //利用成员函数来判断两个立方体是否相等
    bool isSameByClass(Cube &c){
        if (c_long == c.getLong() && c_wide == c.getWide() && c_hight == c.getHight())
        {
            return true;
        }
        return false;
    }

    // 设置私有权限
private:
    int c_long;//长
    int c_wide;//宽
    int c_hight;//高

};

//利用全局函数来判断，两个立方体是否相等
bool isSame(Cube &c1,Cube &c2){
    if (c1.getLong() == c2.getLong() && c1.getWide() == c2.getWide() && c1.getHight() == c2.getHight()){
        return true;
    }
    return false;
}
int main(){
    //创建立方体对象，实例化类
   Cube m;
   m.setHight(10);
   m.setLong(10);
   m.setWide(10);
   cout<<"该立方体的面积："<<m.cubeMS()<<endl;
   cout<<"该立方体的体积："<<m.cubeMV()<<endl;
   //创建第二个立方体
   Cube c2;
   c2.setLong(10);
   c2.setWide(10);
   c2.setHight(10);
   //利用全局函数进行判断
//    bool ref=isSame(m,c2);
//    if (ref)
//    {
//      cout<<"两个立方体是相等的"<<endl;
//    }else{
//      cout<<"两个立方体是不相等的"<<endl;
//    };
   

   //利用成员函数进行判断立方体相关数据
   bool ref=m.isSameByClass(c2);
   if (ref)
   {
       cout << "两个立方体是相等的" << endl;
   }
   else
   {
       cout << "两个立方体是不相等的" << endl;
   };

return 0;
}