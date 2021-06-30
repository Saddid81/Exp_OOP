#include "stdafx.h"
#include "Address.h"
#include "Person.h"
#include "Employee.h"

namespace Exp_OOP
{
	void Employee::PersonInf()
	{
		Person::PersonInf();
		cout << "Person department: " << department << endl;
	}

	int Employee::GetTaxId()
	{
		return TaxId;
	}

	int Employee::TaxId = 0;
}