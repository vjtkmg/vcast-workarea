#include "Acme_PayrollSystem.h"
#include "iostream"

using namespace std;

//
//  Set the local tax rate here and use the Base Constructor to initialize the base class.
//
Acme_PayrollSystem::Acme_PayrollSystem(double InitialCash ) : PayrollSystem(InitialCash)
{
    mTaxRate=.20;
    mTotalTaxCollections = 0;
}

//
//  Process the paycheck for an individual employee.  This is defined as a virtual function in the
//  base class and needs to be implemented here to handle the specifics of ACME.
//

void Acme_PayrollSystem::processPayCheck(Employee emp)
{
    double Salary;

    Salary = emp.getSalary();
    mTotalTaxCollections += (mTaxRate * Salary);

    // TBD:  print paycheck, process benefits, etc...
}

