#pragma once
#include "Program.h"
#include<string>
class Music : public Program	//concrete derived classes
{
private:
	string type;
public:
	Music(string t):type(t){}
	Music(string t,string ty, int d):Program(t,d),type(ty){}

	string getType();//Polymorphism

	void loadData(string *array);
};

