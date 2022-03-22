#pragma once

#include "Presenter.h"
#include <iostream>
using namespace std;

class Program//Abstract base classes 
{
protected:
	string m_title;
	int m_duration;
public:
	Program(string m = "", int d = 0) :m_title(m),m_duration(d){}
	virtual string getType() = 0;
	void display();
	string getProgramName() { return m_title; }
	virtual void loadData(string* array) = 0;
};

