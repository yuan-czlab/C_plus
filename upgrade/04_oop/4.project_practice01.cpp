# include <iostream>
using namespace std;


/*

设计立方体类(Cube)

求出立方体的面积和体积
分别用全局函数和成员函数判断两个立方体是否相等。

*/
class Cube{

public:
  void setL(float l){
    m_l = l;
  }
  float getL(){
    return m_l;
  }

  void setW(float w){
    m_w = w;
  }

  float getW(){
    return m_w;
  }

  void setH(float h){
    m_h = h;
  }

  float getH(){
    return m_h;
  }

  float getArea(){
    return m_l * m_h * 2 + m_l * m_w * 2 + m_h * m_w * 2;
  }
  float getVolume(){
    return m_l * m_w * m_h;
  }

  bool equal(Cube p){
    return m_l == p.getL() and m_w == p.getW() and m_h == p.getH();
  }

private:
  float m_l;  // 长
  float m_w;  // 宽
  float m_h;  // 高
};

bool equalCube(Cube p1, Cube p2){
  return p1.getL() == p2.getL() and p1.getW() == p2.getW() and p1.getH() == p2.getH();
}



int main(){
  Cube p1;
  Cube p2;

  p1.setL(10.0);
  p1.setW(20.0);
  p1.setH(30.0);
  
  p2.setL(20.0);
  p2.setW(30.0);
  p2.setH(40.0);

  cout << "p1的面积："<< p1.getArea() << endl;
  cout << "p2的面积："<< p2.getArea() << endl;

  cout << "p1的体积："<< p1.getVolume() << endl;
  cout << "p2的体积："<< p2.getVolume() << endl;

  cout << p1.equal(p2) << endl;
  cout << equalCube(p1, p2) << endl;

  return 0;
}