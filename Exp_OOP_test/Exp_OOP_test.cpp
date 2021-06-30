#include "pch.h"
#include "CppUnitTest.h"
#include "../Exp_OOP/stdafx.h"
#include "../Exp_OOP/Address.h"
#include "../Exp_OOP/Person.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Exp_OOP
{
	TEST_CLASS(ExpOOPtest)
	{
	public:
		
		TEST_METHOD(When_PersonIsCreated_NameIsOk)
		{

			int age = 35;
			string name = "Claudia";
			int sex = Person::female;
			
			Person* p_test= new Person(age,name,0);
			
			Assert::AreEqual(name, p_test->name);
			
		}
	};
}
