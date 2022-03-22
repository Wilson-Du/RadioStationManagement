#include "TalkShow.h"
#include<string>



string TalkShow::getType() {	//Polymorphism
	return type;
};

void TalkShow::loadData(string* array) { //read values from array
	m_title = array[0];
	m_duration = stoi(array[2]);

}