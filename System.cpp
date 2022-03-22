#include "System.h"
#include <iostream>
#include <string>
#include<fstream>
#include "Music.h"
#include "TalkShow.h"
using namespace std;


string System::m_name = "Welcome to Radio Station Management!";// static member data


void System::init_Program() {	//read program data into linklist from text file 
	ifstream in("Program.txt");
	string array[3];
	int c;
	if (!in)
	{
		cout << "Unable to open the file !";
	}
	in >> c;
	while (c > 0) {
		in >> array[0] >> array[1] >> array[2];
		string type = array[1];
		string title = array[0];
		Program* p_Node;
		if (type == "Music") {
			p_Node = new Music(type);
		}
		else{
			p_Node = new TalkShow(type);
		}
		p_Node->loadData(array);
		m_pro_list.add(p_Node);
		c--;
	}
	in.close();
}

void System::init_Presenter() {
	ifstream in("Presenters.txt");
	string array[3];
	int c;
	if (!in)
	{
		cout << "Unable to open the file !";
	}
	in >> c;
	while (c > 0) {
		in >> array[0] >> array[1] >> array[2];
		Presenter* p_Node = new Presenter();
		p_Node->loadData(array);
		m_presenter_list.add(p_Node);
		c--;
	}
	in.close();
}

void System::init_Schedule() {
	ifstream in("Schedule.txt");
	int c;
	string array[6];
	if (!in)
	{
		cout << "Unable to open the file !";
	}
	in >> c;

	while(c > 0 ){
		in >> array[0] >> array[1] >> array[2] >> array[3] >> array[4]>>array[5];
		Schedule* p_Node = new Schedule();
		p_Node->loadData(array);
		m_schedule_list.add(p_Node);
		c--;

	}
	in.close();

}

void System::init() {
	init_Program();
	init_Presenter();
	init_Schedule();
}

void System::showProgramDetails(string programme_name) {//show program details based on program title

	Node* p_ListNode = m_pro_list.head;
	while (p_ListNode != NULL) {
		Program* p_Node = (Program * )p_ListNode->data;
		if (p_Node->getProgramName()==programme_name) {
			p_Node->display();
			return;
		}
		p_ListNode = p_ListNode->next;
	}

}



void System::showPresenterDetails(string presenter_name) {//show presenter details based on presenter name



	Node* p_ListNode = m_presenter_list.head;
	while (p_ListNode != NULL) {
		Presenter* p_Node = (Presenter*)p_ListNode->data;
		if (p_Node->getName()==presenter_name) {
			cout << (*p_Node);
			return;
		}
		p_ListNode = p_ListNode->next;
	}

}

void System::showProgramList() {//show program list

	int i = 1;
	Node* p_ListNode = m_pro_list.head;
	while (p_ListNode != NULL) {
		Program* p_Node = (Program*)p_ListNode->data;
		cout << i << ": ";
		p_Node->display();
		p_ListNode = p_ListNode->next;
		i++;
	}
}

void System::showPresenterList() {//show presenter list


	int i = 1;
	Node* p_ListNode = m_presenter_list.head;
	while (p_ListNode != NULL) {
		Presenter* p_Node = (Presenter*)p_ListNode->data;
		cout << i << ": ";
		cout << (*p_Node);
		p_ListNode = p_ListNode->next;
		i++;
	}

	
}

void System::showScheduleList() {//show schedule
	int i = 1;
	Node* p_ListNode = m_schedule_list.head;
	while (p_ListNode != NULL) {
		Schedule* p_Node = (Schedule*)p_ListNode->data;
		cout << i << ": ";
		p_Node->display();
		p_ListNode = p_ListNode->next;
		i++;
	}

	int size = m_schedule_list.size();	//want to see which program
	cout << "Please choose the program number:";
	Node* p = m_schedule_list.head;
	int c = 0;
	int j = 0; 
	cin >> c;

	if (c > size || c <= 0) {
		return;
	}
	else {
		while (p && j < c-1) {
			p = p->next;
			j++;
		}
		while (p != NULL) {
			Schedule* p_schedule = (Schedule*)p->data;
			cout << "1 Program details" << "   " << "2 Presenter details" << "   " << "3 Quit" << endl;
			cin >> c;
			if (c == 1) {//show program details
				showProgramDetails(p_schedule->getProTitle());
			}
			else if (c == 2) {//show presenter details
				showPresenterDetails(p_schedule->getPreName());
				
			}
			else if (c == 3) { return; }


		}
	}

}

void System::mainmenu() {	//main menu
	char exit;
	int ch;
	while (1) {
		cout << "1 Program"<<"  "<<"2 Presenters"<<"  "<<"3 Schedule"<<"  "<<"4 Quit" << endl;
		cout << "Please enter your choice:" << endl;
		cin >> ch;
		switch (ch) {
		case 1:system("cls"); showProgramList(); break;
		case 2:system("cls"); showPresenterList(); break;
		case 3:system("cls"); showScheduleList(); break;
		case 4:system("cls"); cout << "Program exit!";break;
		default:cout << "Option does not Exist, Plsease Choose another option (1 - 4)" << endl;
			cin >> ch;

		}
		cout << "Do you want to exit? y/n" << endl;
		cin >> exit;
		if (exit == 'y')
		{
			break;
		}
		system("cls");
	}
}

