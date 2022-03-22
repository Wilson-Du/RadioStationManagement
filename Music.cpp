#include "Music.h"
#include<string>


string Music::getType() {//Polymorphism
	return type;
};
void Music::loadData(string *array) {
	m_title = array[0];
	m_duration = stoi(array[2]);

}
