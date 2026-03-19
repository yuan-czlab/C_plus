# include <iostream>
# include <vector>
# include <math.h>
using namespace std;



/*

**练习案例2：点和圆的关系**

设计一个圆形类（Circle），和一个点类（Point），计算点和圆的关系。
*/

class Point{
public:
  void setX(float x=0.0){
    p_x = x;
  }

  void setY(float y=0.0){
    p_y = y;
  }

  float getX(){
    return p_x;
  }

  float getY(){
    return p_y;
  }

  vector<float> getCoordinate(){
    cout << "(" << p_x << "," << p_y << ")" << endl;
    return {p_x, p_y};
  }


private:
  float p_x;
  float p_y;
};

class Circle{

public:
  void setR(float r){
    m_r = r;
  }

  float getR(){
    return m_r;
  }

  void setCenterCircle(float x=0.0, float y=0.0){
    centCircle.setX(x);
    centCircle.setY(y);
  }


  Point getCenterCircle(){
    return centCircle;
  }

private:
  float m_r;
  Point centCircle;
};



void pointCircleRelationship(Circle c, Point p){
  Point cPoint = c.getCenterCircle();
  float dPow2 = pow(cPoint.getX() - p.getX(), 2) + pow(cPoint.getY() - p.getY(), 2);
  if (dPow2 > pow(c.getR(), 2)){
    cout << "该点在圆外"<< endl;
  }
  else if(dPow2 == pow(c.getR(), 2)){
    cout << "该点在圆上" << endl;
  }
  else{
    cout << "该点在圆内" << endl;
  }
}



int main(){
  Circle circle1;  // 圆
  Point p;  // 点

  circle1.setR(10.0);

  circle1.setCenterCircle(0.0, 0.0);

  p.setX(10.0);
  p.setY(0);
  
  pointCircleRelationship(circle1, p);


  return 0;
}