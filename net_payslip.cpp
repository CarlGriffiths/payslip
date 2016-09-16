///CARL GRIFFITHS
#include <iostream>
#include <iomanip>
#include "net_payslip.h"
using namespace std;
float net_payslip_class::net_payslip(int emp_no_p, float gross_p, float prsi_p, float paye_p, float usc_p, float union_sub_p, float health_p, float net_pay_p)
{
    dm_employee_no = emp_no_p;
    dm_gross = gross_p;
    dm_prsi = prsi_p;
    dm_health = health_p;
    dm_paye = paye_p;
    dm_usc = usc_p;
    dm_union = union_sub_p;
    dm_netpay = net_pay_p;


    cout << "                                         " << endl;
    cout << "_________________________________________" << endl;
    cout << "|             PAYSLIP                    |" << endl;
    cout << "|  Employee number    "<< dm_employee_no << setw(15) << "                       |" << endl;
    cout << "|                                        |" << endl;
    cout << "|                                        |" << endl;
    cout << "|   Gross pay:" << fixed << setprecision(2) << setw(14) << dm_gross <<"             |" << endl;
    cout << "|    PRSI:" << fixed << setprecision(2) << setw(16) << dm_prsi << "               |" << endl;
    cout << "|    PAYE:" << fixed << setprecision(2) << setw(17) << dm_paye <<"              |" << endl;
    cout << "|    USC:" << fixed << setprecision(2) << setw(18) << dm_usc << "              |" << endl;
    cout << "|    UNION:" << fixed << setprecision(2) << setw(15) << dm_union <<"               |" << endl;
    cout << "|    HEALTH:" << fixed << setprecision(2) << setw(14) << dm_health << "               |" << endl;
    cout << "|                                        |" << endl;
    cout << "|                                        |" << endl;
    cout << "|    NETPAY:" << fixed << setprecision(2) << setw(16) << dm_netpay << "             |" << endl;
     cout << "_________________________________________" << endl;


}

