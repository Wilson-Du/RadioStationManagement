#pragma once
#include "Program.h"
#include<string>

class TalkShow:public Program //concrete derived classes
{
private:
	string type;
public:
	TalkShow(string t):type(t){}
	string getType(); //Polymorphism
	void loadData(string *array);
};

