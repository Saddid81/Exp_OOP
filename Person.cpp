#include "stdafx.h"
#include "Address.h"
#include "Person.h"

/*Person::Person()
{

}

Person::~Person()
{

}
*/
void Person::PersonInf()
{
	cout << "Person name: " << name << endl;
	cout << "Person age: " << age << endl;
}

int Person::GetLiveExpectancy()
{

	return LiveExpectancy;
}

int Person::LiveExpectancy = 80;
