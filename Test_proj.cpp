#include "CppUnitTest.h"
#include "stdafx.h"
#include "Address.h"
#include "Person.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestingProj
{
	TEST_CLASS(TestingProj)
	{
	public:

		TEST_METHOD(ClassInit)
		{
			int age = 35;
			string name = "Claudia";
			int sex = Person::female;
			Person p_test(age, name, sex);

			Assert::AreEqual(name, p_test.name);
		}
	};
}
