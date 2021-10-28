#include "employee.h"



Employee::Employee()
{
    mName = "empty";
    mSalary = 0;
    mAge = 0;
}

Employee::~Employee()
{
}

Employee::Employee(std::string name, double salary, int age)
  : mName(name),
    mSalary(salary),
    mAge(age)
{
}

double Employee::getSalary(void) 
{
  return mSalary;
}

std::string Employee::getName(void) 
{
  return mName;
}

int Employee::getAge(void) 
{
  return mAge;
}
