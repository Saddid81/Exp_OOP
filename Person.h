#pragma once
class Person
{
private:
	static int LiveExpectancy;
protected:
	int ssn;
public:
	const static int female = 0;
	const static int male = 1;
	int age;
	string name;
	int sex;
	Address* address;

	Person(int age, string name, int sex);
	Person(int age, string name, int sex, int house_number, string street_name, string city);
	Person(const Person& p);

	~Person();

	virtual void PersonInf();
	static int GetLiveExpectancy();
};

