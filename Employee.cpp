#include "stdafx.h"
#include "Address.h"
#include "Person.h"
#include "Employee.h"

void Employee::PersonInf()
{
	Person::PersonInf();
	cout << "Person department: " << department << endl;
}
