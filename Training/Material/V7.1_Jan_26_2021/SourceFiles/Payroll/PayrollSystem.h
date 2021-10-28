#ifndef _PAYROLLSYSTEM_
#define _PAYROLLSYSTEM_

#include <string>
#include "Employee.h"

#define MAX_EMPLOYEES 100

//
//  This is an abstract class.  The method to process a specific paycheck needs to be implemented
//  by a derived class, that knows the specifics of a company's benefits, local taxes, etc...
//  Everything else is implemented here in the base class.
//
class PayrollSystem
{
  public:
    PayrollSystem(double InitialCash);
    
    bool addEmployee( std::string name, double salary, int age );
    bool removeEmployee( std::string name );
    void addCash( int deposit );
    double runPayroll( void );
    virtual void processPayCheck(Employee emp) = 0;
    
  private:
    Employee *mEmployeeList[MAX_EMPLOYEES];
    double mCashOnHand;
    int mNumEmployees;
    double mTotalPayroll;
};

#endif
