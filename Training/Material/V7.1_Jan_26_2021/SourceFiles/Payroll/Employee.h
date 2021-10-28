#ifndef _EMPLOYEE_
#define _EMPLOYEE_

#include <string>

class Employee
{
  public:
    Employee();
    ~Employee();
    Employee(std::string name, double salary, int age );

    double getSalary(void);
    int getAge(void);
    std::string getName(void);
    
  private:
    double mSalary;
    std::string mName;
    int mAge;
};

#endif
