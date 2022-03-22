#include <iostream>
#include "System.h"
#include"Music.h"
#include"TalkShow.h"
using namespace std;


//volatile and const are both qualifiers and keywords


int main()  
{
	
    cout << System::getName()<<endl;//static member function
    System sys;

    sys.init();
    sys.mainmenu();
	
	


	/*  Abstract base classes and concrete derived classes //     Inheritanceand polymorphism.
	Program *p;
	p = new Music("music");//Allocate memory for pointer p, the object of Music class is created dynamically
	cout << p->getType() << endl;
	p = new TalkShow("Talkshow");//Allocate memory for pointer p, the object of TalkShow class is created dynamically
	cout << p->getType() << endl;
	*/


	/* operator overloading as member function and non-member function
	Presenter p1("David", 3, 10000);
	Presenter p2 = p1;
	cout << p2;
	*/

	

	/*basic association
	Schedule s;
	Presenter p("Alex",15,180000);
	s.setPresenter(p);
	s.displayPre();
	*/

	/* Qualifier association
	Presenter p3("Salla", 12, 34000);
	Presenter p4("Wale", 23, 450000);
	Schedule s;
	s.setPre(p3, 1);
	s.setPre(p4, 0);
	Presenter p5 = p4;
	s.setPre(p5, 2);
	*/

	/* Association class
	Presenter p("ASSCV", 22, 111555);
	Program* p1 = new Music("song", "Music", 30);
	Schedule s;
	s.setPresenter(p);
	s.setProgram(p1);
	s.displayPre();
	*/




	

	
}

