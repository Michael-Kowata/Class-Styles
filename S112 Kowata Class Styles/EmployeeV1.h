#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
using namespace std;
//Prototypes-------------------------------------------
string trim(string str);

//-----------------------------------------------------
//Header (declarations)
//-----------------------------------------------------

class EmployeeV1
{
private:
	//Data Members
	string name;
	double salary;
public:
	//Mutators
	void setName(string name);
	void setSalary(double salary);

	//Accessors
	string getName();
	double getSalary();
	
	//Constructors
	EmployeeV1(string name = "N.A", double salary = 0);

	//User-defined methods
	string stringify();

};

//-----------------------------------------------------
//Implementation
//-----------------------------------------------------

//Mutators
void EmployeeV1::setName(string name)
{
	//Trim name removing leadin-trailing spaces
	this->name = trim(name);
}
void EmployeeV1::setSalary(double salary)
{
	//salary must be higher than 100K - otherwise set to 100K
	if (salary < 100000) { salary = 100000; }
	this->salary = salary;
}

//Accessors
string EmployeeV1::getName()
{
	return name;
}
double EmployeeV1::getSalary()
{
	return salary;
}

//Constructors
EmployeeV1::EmployeeV1(string name, double salary)
{
	setName(name);
	setSalary(salary);
}

//User-defined methods
string EmployeeV1::stringify()
{
	stringstream sout;
	sout << fixed << showpoint << setprecision(2);
	sout << " EmployeeV1 [Name: " << getName() << ", Salary: " << getSalary() << "]";

	return sout.str();
}

string trim(string str)
{
	int first = 0;
	int last = str.length() - 1;
	while (first < last && str[first] == ' ') first++;
	while (last > first && str[last] == ' ')last--;
	return str.substr(first, last - first + 1);
}