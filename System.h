#pragma once
#include "Program.h"
#include "Presenter.h"
#include "Schedule.h"
#include "LinkList.h"

class System
{
private:
	LinkList m_pro_list;	//composition
	LinkList m_presenter_list;	//composition
	LinkList m_schedule_list;	//composition
	static string m_name;	//Static member data



public:
	void mainmenu();//show menu
	void init();//three init functions
	static string getName() { return m_name; }
	void init_Program();//read the data about program from a text file
	void init_Presenter();//read the data about presenters from a text file
	void init_Schedule();//read the data about schedule from a text file
	void showProgramList();//show details of program from link list
	void showPresenterList();//show details of presenter from link list
	void showScheduleList();//show details of schedule from link list
	void showProgramDetails(string program_name);//show program with specific program title
	void showPresenterDetails(string present_name);//show presenter with specific presenter name
};
