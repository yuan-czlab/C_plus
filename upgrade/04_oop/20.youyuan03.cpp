/* 成员函数做友元 */

# include <iostream>
using namespace std;


class Building;
class GoodGay
{
public:
  GoodGay();
  void visit();  //只让visit函数作为Building的好朋友，可以发访问Building中私有内容
  void visit2();


private:
  Building *building;
};


class Building
{
  friend void GoodGay::visit();

public:
  Building();

public:
  string m_SittingRoom;

private:
  string m_BedRoom;

};

GoodGay::GoodGay()
{
  building = new Building;
}

Building::Building()
{
  this->m_SittingRoom = "客厅";
  this->m_BedRoom = "卧室";
}

void GoodGay::visit()
{
  cout << "好基友正在访问" << building->m_SittingRoom << endl;
	cout << "好基友正在访问" << building->m_BedRoom << endl;
}

void GoodGay::visit2()
{
  	cout << "普通朋友正在访问" << building->m_SittingRoom << endl;
	//cout << "普通朋友正在访问" << building->m_BedRoom << endl;
}

void test01()
{
  GoodGay gg;
  gg.visit();
  gg.visit2();
}


int main(){
  test01();
  return 0;
}