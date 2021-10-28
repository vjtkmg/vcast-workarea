
#include "Acme_PayrollSystem.h"
#include "employee.h"
#include "iostream"

using namespace std;


int main(int argc, char* argv[])
{
    double cash;
    Acme_PayrollSystem PayRoll(100000);

    PayRoll.addEmployee("Bob", 10000, 30);
    PayRoll.addEmployee("Sue", 20000, 30);
    PayRoll.addEmployee("Bill", 15000, 30);

    cash = PayRoll.runPayroll();
    cout << endl << "Remaining Cash = $" << cash << endl;

    PayRoll.removeEmployee("Sue");
    cash = PayRoll.runPayroll();
    cout << endl << "Remaining Cash = $" << cash << endl;

    return 0;
}

