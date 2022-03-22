#include "Presenter.h"
#include "Program.h"
#include <iostream>
#include <string>

void Presenter::operator=(const Presenter& em)	//Operator Overloading as a member function
{
	m_salary = em.m_salary;
	m_Name = em.m_Name;
	years_employed = em.years_employed;
		

}

void Presenter::loadData(string *array) {//give values to member data

	m_Name = array[0];
	years_employed = stoi(array[1]);
	m_salary = stof(array[2]);


}

ostream& operator<<(ostream& ostr, const Presenter& c)//operator overloading as an non-member function
{
	ostr <<"name: "<< c.m_Name << " " <<"years employed: "<< c.years_employed << " " <<"salary: "<< c.m_salary << endl;
	return ostr;
}




