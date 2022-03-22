#pragma once
#include <iostream>

using namespace std;

class Presenter {
	friend ostream& operator<<(ostream& ostr, const Presenter& c);
	friend class System;
private:
	float m_salary;
	int years_employed;
	string m_Name;



public:
	Presenter(string m="",int y=0, float s=0) {
		m_Name = m;
		years_employed =y;
		m_salary = s;
	}



	int getYearsEmployed() { return years_employed; }
	float getSalary() { return m_salary; }
	string getName() { return m_Name; }
	void loadData(string *array);//read values from array
	void operator=(const Presenter& em);
};