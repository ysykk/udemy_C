#include <iostream>
#include "car.h"


using namespace std;

CCar::CCar() : m_fuel(0), m_migration(0)
{
	cout << "CCarオブジェクト生成" << endl;
}

CCar::~CCar()
{
	cout << "CCarオブジェクト破棄" << endl;
}
void CCar::move()
{
	//  燃料があるなら移動
	if (m_fuel > 0) {
		m_migration++;  //  距離移動
		m_fuel--;       //  燃料消費
	}
	cout << "移動距離:" << m_migration << endl;
	cout << "燃料" << m_fuel << endl;
}
//  燃料補給メソッド
void CCar::supply(int fuel)
{
	if (fuel >= 0) {
		m_fuel += fuel; //  燃料補給
	}
	cout  << m_fuel << endl;
}