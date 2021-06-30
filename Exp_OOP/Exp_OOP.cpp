#include "stdafx.h"
#include "Address.h"
#include "Person.h"
#include "Employee.h"
#include "Empfactory.h"

using namespace Exp_OOP;

int main()
{
	Person* p = new Person(40, "Pekka Mattile", Person::male);
	p->PersonInf();
	int le = Person::GetLiveExpectancy();
	cout << " The live expectancy is: " << le << endl;

	Person* p1 = new Person(35, "Liisa Pérez", Person::female);
	auto* address = new Address(310, "Garzón", "Santiago de Cuba");
	p1->address = address;
	p1->PersonInf();

	Employee E(38, "Maria", Person::female, "Science");
	
	auto n = [](const Person& p)
	{
		cout << p.name << endl;
	};
	
	n(E);

	int id = 45;
	Empfactory ep;
	
	int TID = E.GetTaxId();

	cout << TID << endl;

	
	delete p;
	delete p1;

	system ("pause > 0"); 
	
	return 0;

}

