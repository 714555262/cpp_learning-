#include<iostream>
#include<string>
using namespace std;
//练习案例：点和圆的关系，设计一个圆类和一个点类，计算点和圆的关系
//使用点到圆心的距离来实现关系的判断操作
//点和圆有4钟关系，圆心，圆内，圆上，圆外
//创建圆类
class Circle{
   //设置公共权限
public:
   //设置圆心
   void setInX(int X){
      m_x=X;
   }
   //获取圆心
   int getInX(){
      return m_x;
   }
   void setInY(int Y)
   {
       m_y = Y;
   }
   // 获取圆心
   int getInY()
   {
       return m_y;
   }
   //设置半径
   void setR(int R){
      m_r=R;
   }
   //获取半径
   int getR(){
    return m_r;
   }
   //使用成员函数来判断点和圆的关系
   void Relation(point &p){
       // 计算两点之间的距离
       int Distance =
           (m_x - p.getX()) * (m_x - p.getX()) +
           (m_y - p.getY()) * (m_y - p.getY());

       // 计算半径的平方
       int rDistance = m_r * m_r;

       // 判断关系
       if (Distance == rDistance)
       {
           cout << "点在圆上" << endl;
       }
       else if (Distance < rDistance)
       {
           cout << "点在圆内" << endl;
       }
       else if (Distance > rDistance)
       {
           cout << "点在圆外" << endl;
       }
   }
//设置私有权限
private:
    // 圆心
    int m_x;
    int m_y;

    int m_r; // 圆半径
};

//创建点的类
class point{
//设置公共权限
public:
     //设置圆心x
     void setX(int X){
        p_x=X;
     }
     //获取圆心X
     int getX(){
        return p_x;
     }
     // 设置圆心y
     void setY(int Y)
     {
         p_y = Y;
     }
     // 获取圆心y
     int getY()
     {
         return p_y;
     }
//设置权限
private:
    // 设置点
    int p_x;
    int p_y;
};

//全局函数来判断两者的关系
void c_p_Relation(Circle &c,point &p){
    //计算两点之间的距离
    int Distance=
    (c.getInX() - p.getX()) * (c.getInX() - p.getX()) +
    (c.getInY() - p.getY()) * (c.getInY() - p.getY());

    //计算半径的平方
    int rDistance=c.getR()*c.getR();
    
    //判断关系
    if (Distance==rDistance)
    {
        cout<<"点在圆上"<<endl;
    }else if (Distance<rDistance)
    { 
        cout<<"点在圆内"<<endl;  
    }else if (Distance>rDistance)
    {
        cout<<"点在圆外"<<endl;
    }
    
}
int main()
{
    Circle c1;
    c1.setInX(0);
    c1.setInY(0);
    c1.setR(2);

    point p;
    p.setX(1);
    p.setY(0);
    //调用全局函数进行关系判断
    // c_p_Relation(c1,p);
    
    //调用成员函数来进行关系判断
    c1.Relation(p);

return 0;
}