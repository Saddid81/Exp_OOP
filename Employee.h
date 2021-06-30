#pragma once
#include "Person.h"

namespace Exp_OOP
{
	class Employee :
		public Person
	{
		friend class Empfactory;

		static int TaxId;
	public:
		Employee()
			:Person(0, "", 0) {}

		Employee(int age, string const& name, int sex, string department = string())
			: Person(age, name, sex), department(department)
		{}

		void PersonInf() override;
		string department;

		static int GetTaxId();

	};

}