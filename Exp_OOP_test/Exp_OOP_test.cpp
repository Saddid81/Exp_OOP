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
		
		TEST_METHOD(TestMethod1)
		{

			int age = 35;
			string name = "Claudia";
			int sex = Exp_OOP::Person::female;
			
			Exp_OOP::Person p_test(age,name,sex);
			
			Assert::AreEqual(name, p_test.name);
		}
	};
}
