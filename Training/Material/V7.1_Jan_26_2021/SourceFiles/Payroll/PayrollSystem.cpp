#include "PayrollSystem.h"

//
//  Payroll System Constructor
//
PayrollSystem::PayrollSystem(double InitialCash)
{
    mCashOnHand=InitialCash;
    mNumEmployees=0;
    mTotalPayroll=0;

    //
    //  The employeed list is implemented as an array of pointers to employee objects.  If the pointer
    //  is null, the slot is empty and can be used by a new employee.
    //
    for (int i=0; i<MAX_EMPLOYEES; i++)
    {
        mEmployeeList[i] = 0;
    }
}

//
//  Add Employees to the Payroll.
//
//  The Employee list is just a fixed array.  The employee is added to the 1st empty slot.
//  If the employee is successfully added, a value of TRUE is returned, else FALSE is returned.
//
bool PayrollSystem::addEmployee( std::string name, double salary, int age )
{
    for (int i=0; i<MAX_EMPLOYEES; i++)
    {
        if (mEmployeeList[i] == 0)
        {
            mEmployeeList[i] = new Employee(name, salary, age);
            mTotalPayroll += salary;
            mNumEmployees++;
            return(true);
            break;
        }
    }
    return(false);
}

//
//  Remove an Employee from the Payroll
//
//  If the employee is successfully removed, a value of TRUE is returned, else FALSE is returned.
//
bool PayrollSystem::removeEmployee( std::string name )
{
    for (int i=0; i<MAX_EMPLOYEES; i++)
    {
        if ((mEmployeeList[i] != 0) && (mEmployeeList[i]->getName() == name))
        {
            mTotalPayroll -= mEmployeeList[i]->getSalary();
            delete mEmployeeList[i];
            mEmployeeList[i]=0;  // Make this entry available for a new employee
            mNumEmployees--;
            return(true);
            break;
        }
    }
    return(false);
}

//
//  Add cash to the payroll to cover next paydate.
//
void PayrollSystem::addCash( int deposit )
{
    mCashOnHand += deposit;
}

//
//  Process payroll for each employee.  This function should be run 1 time on each paydate.
//
//  The remaining Cash-on-hand is returned.  If it's less than zero, pay checks will not be processed
//  for those unlucky few.  The "processPayCheck" method needs to be implemented by a derived class.
//
double PayrollSystem::runPayroll( void )
{
    for (int i=0; i<MAX_EMPLOYEES; i++)
    {
        if (mEmployeeList[i] != 0)
        {
            mCashOnHand -= mEmployeeList[i]->getSalary();
            if (mCashOnHand >= 0)
            {
                processPayCheck(*mEmployeeList[i]);
            }
        }
    }
    return(mCashOnHand);
}

