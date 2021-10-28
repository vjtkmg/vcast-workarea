#ifndef _ACME_PAYROLLSYSTEM_
#define _ACME_PAYROLLSYSTEM_

#include <string>
#include "PayrollSystem.h"

//
//  This is the derived Payroll  class for the ACME Widget company.
//
class Acme_PayrollSystem : public PayrollSystem
{
  public:
    Acme_PayrollSystem(double InitialCash);
    void processPayCheck(Employee emp);

  private:
    double mTaxRate;
    double mTotalTaxCollections;
};

#endif
