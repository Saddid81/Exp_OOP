#include "stdafx.h"
#include "Person.h"
#include "Exp_OOP.h"


int main()
{
	Person* p = new Person;
	p->name = "Juan Carlos";
	p->age = 40;
	p->PersonInf();
	
	int le = Person::GetLiveExpectancy();
	cout << " The live expectancy is: " << le << endl;

	delete p;

	system ("pause > 0"); 
	
	return 0;

}

