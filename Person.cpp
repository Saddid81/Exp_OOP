#include "stdafx.h"
#include "Address.h"
#include "Person.h"

Person::Person(int age, string name, int sex)
	: age(age), name(name), sex(sex)
{
	address = nullptr;
}

Person::Person(int age, string name, int sex, int house_number, string street_name, string city)
	: Person(age, name, sex)
{
	if (address != nullptr)
		delete address;
	address = new Address(house_number, street_name, city);
}

Person::Person(const Person& p)
	:age(p.age), name(p.name), sex(p.sex)
{
	auto* a = p.address;
	address = new Address(a->house_number, a->street_name, a->city);
}

Person::~Person()
{
	if (address != nullptr)
	{
		delete address;
		address = nullptr;
	}
}

void Person::PersonInf()
{
	cout << "The person information is:" << endl;
	cout << "Person name: " << name << endl;
	cout << "Person age: " << age << endl;
	if (address)
		cout << "Person address: " << address->house_number << " " << address->street_name << ", " << address->city << endl;
}

int Person::GetLiveExpectancy()
{

	return LiveExpectancy;
}

int Person::LiveExpectancy = 80;
