#include "Schedule.h"
#include<string>

void Schedule::setPresenter(Presenter &p) {
	 m_presenter=&p;
}
void Schedule::setProgram(Program*p) {
	m_program = p;
}
string Schedule::getProTitle() {
	return m_pro_title;
}
string Schedule::getPreName() {
	return m_presenter_name;
}
void Schedule::displayPre() {
	cout<<"Presenter: " << (*m_presenter);
	cout << "Program: "; m_program->display();
}





void Schedule::display() {
	cout << "name:"<<m_presenter_name<< " Program: " << m_pro_title << " Audience num: " << listener_count << " advertise: " << advertising
		<<" start time: "<<schedule_time<< " last time: " << last_time<<endl;
}

void Schedule::loadData(string *array) {//read values from array
	m_presenter_name = array[0];
	m_pro_title = array[1];
	listener_count = stoi(array[2]);
	advertising = array[3];
	schedule_time = array[4];
	last_time = array[5];

}