#pragma once
class Person
{
	static int LiveExpectancy;
public:
	const static int female = 0;
	const static int male = 1;
	int age;
	string name;
	int sex;
	Address* address;

	//Person();
	void PersonInf();
	static int GetLiveExpectancy();
};

