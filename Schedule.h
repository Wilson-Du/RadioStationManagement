#pragma once

#include "Program.h"
#include "Presenter.h"

class Schedule
{
private:
	Presenter pre[3];//Qualifier association
	Program* m_program;//Association
	Presenter* m_presenter;	//Association
	string advertising;	
	string m_pro_title;
	string m_presenter_name;
	int listener_count;
	string schedule_time;
	string last_time;
public:
	Schedule() {
		listener_count = 0;
		m_presenter = NULL;
		m_program = NULL;


	}
	void setPre(Presenter p, int i) {//Qualifier assicoation function
		pre[i] = p;
		cout <<"Program "<<i+1<<" "<< pre[i];
	}
	void setPresenter(Presenter &p);
	void setProgram(Program* p);
	string getProTitle();
	string getPreName();
	void display();
	void loadData(string *array);
	void displayPre();

};

