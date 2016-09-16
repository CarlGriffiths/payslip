///Carl Griffiths CCP1

///Header files contain definitions of functions and variables, which is imported or used into any C++ program by using the pre-processor #include statement. Header file have an extension ".h" which contains C++ function declaration and macro definition.
#include <iostream>
#include <iostream>
#include <iomanip>
#include "employee.h"
#include "employee.cpp"

#include "gross_ac.h"
#include "gross_ac.cpp"
#include "tax_ac.h"
#include "tax_ac.cpp"

#include "net_payslip.h"
#include "net_payslip.cpp"

#include "bank_ac.h""
#include "bank_ac.cpp"
///Inheritance in Object Oriented Programming can be described as a process of creating new classes from existing classes. New classes inherit some of the properties and behavior of the existing classes. An existing class that is "parent" of a new class is called a base class.

///A member function of a class is a function that has its definition or its prototype within the class definition like any other variable. It operates on any object of the class of which it is a member, and has access to all the members of a class for that object.
using namespace std;

int emp_no[4] = {101, 102, 103, 104} ;
float hours_worked [4] = {41, 50, 50, 56};
float hourly_rate[4] = {41, 50, 50, 56};
float tax_credit[4] = {62.25, 50.67, 59.8, 65.8} ;
float union_sub[4] = {25, 25, 25, 0};
float health[4] = {10,23,80,10};
int bank_acc[4] = {80045001, 80045002, 80045003, 80045004};
float gross_pay[4], usc[4], calculate_netpay[4];
float basic_pay[4], overtime [4], paye[4] , net_pay[4], prsi[4];
float totals;

main()
{
    class permanent_employee employee1, employee2, employee3, employee4 ;

    class gross_pay_class emp_gross1, emp_gross2, emp_gross3, emp_gross4;

basic_pay[0] = emp_gross1.basic_pay(hours_worked[0], hourly_rate[0]);
gross_pay[0] = basic_pay[0] + overtime [0];
///cout << "The Gross Pay for Employee 101 is: " << gross_pay[0] << fixed << setprecision(2) << endl;
overtime [0] = emp_gross1.overtime(hours_worked[0], hourly_rate[0]);
///cout << "The Overtime for Employee 101 is: " << overtime [0] << endl;

basic_pay[1] = emp_gross1.basic_pay(hours_worked[1], hourly_rate[1]);
gross_pay[1] = basic_pay[1] + overtime [1];
///cout << "The Gross Pay for Employee 102 is: " << gross_pay[1] << fixed << setprecision(2) << endl;
overtime [1] = emp_gross1.overtime(hours_worked[1], hourly_rate[1]);
///cout << "The Overtime for Employee 102 is: " << overtime [1] << endl;

basic_pay[2] = emp_gross1.basic_pay(hours_worked[2], hourly_rate[2]);
gross_pay[2] = basic_pay[2] + overtime [2];
///cout << "The Gross Pay for Employee 103 is :" << gross_pay[2] << fixed << setprecision(2) << endl;
overtime [2] = emp_gross1.overtime(hours_worked[2], hourly_rate[2]);
///cout << "The Overtime for Employee 103 is: " << overtime [0] << endl;

basic_pay[3] = emp_gross1.basic_pay(hours_worked[3], hourly_rate[3]);
gross_pay[3] = basic_pay[3] + overtime [3];
///cout << "The Gross Pay for Employee 104 is: " << gross_pay[3] << fixed << setprecision(2) << endl;
overtime [3] = emp_gross1.overtime(hours_worked[3], hourly_rate[3]);
///cout << "The Overtime for Employee 104 is :" << overtime [3] << endl;

class tax_pay_class emp_tax_object1;
class tax_pay_class emp_tax_object2;
class tax_pay_class emp_tax_object3;
class tax_pay_class emp_tax_object4;

paye [0] = emp_tax_object1.paye(gross_pay[0]);
///cout << "PAYE for Employee 101 is: " << paye [0] << endl;
paye [1] = emp_tax_object2.paye(gross_pay[1]);
///cout << "PAYE for Employee 102 is: " << paye [1] << endl;
paye [2] = emp_tax_object3.paye(gross_pay[2]);
///cout << "PAYE for Employee 103 is: " << paye [2] << endl;
paye [3] = emp_tax_object4.paye(gross_pay[3]);
///cout << "PAYE for Employee 104 is: " << paye [3] << endl;

prsi [0] = emp_tax_object1.prsi(gross_pay[0]);
///cout << "PRSI for Employee 101 is: " << prsi [0] << endl;
prsi [1] = emp_tax_object2.prsi(gross_pay[1]);
///cout << "PRSI for Employee 102 is: " << prsi [1] << endl;
prsi [2] = emp_tax_object3.prsi(gross_pay[2]);
///cout << "PRSI for Employee 103 is: " << prsi [2] << endl;
prsi [3] = emp_tax_object4.prsi(gross_pay[3]);
///cout << "PRSI for Employee 104 is: " << prsi [3] << endl;

usc [0] = emp_tax_object1.usc(gross_pay[0]);
///cout << "USC for Employee 101 is: " << usc [0] << endl;
usc [1] = emp_tax_object2.usc(gross_pay[1]);
///cout << "USC for Employee 102 is: " << usc [1] << endl;
usc [2] = emp_tax_object3.usc(gross_pay[2]);
///cout << "USC for Employee 103 is: " << usc [2] << endl;
usc [3] = emp_tax_object4.usc(gross_pay[3]);
///cout << "USC for Employee 104 is: " << usc [3] << endl;

class net_payslip_class net_payslip_obj;


net_pay[0] = (gross_pay[0] - (paye[0] - tax_credit[0])) + prsi[0] + usc[0] + union_sub [0] + health[0];
net_payslip_obj.net_payslip(emp_no[0],gross_pay[0], prsi[0], paye[0], usc[0], union_sub[0], health[0], net_pay [0]);

net_pay[1] = (gross_pay[1] - (paye[1] - tax_credit[1])) + prsi[1] + usc[1] + union_sub [1] + health[1];
net_payslip_obj.net_payslip(emp_no[1],gross_pay[1], prsi[1], paye[1], usc[1], union_sub[1], health[1], net_pay [1]);

net_pay[2] = (gross_pay[2] - (paye[2] - tax_credit[2])) + prsi[2] + usc[2] + union_sub [2] + health[2];
net_payslip_obj.net_payslip(emp_no[2],gross_pay[2], prsi[2], paye[2], usc[2], union_sub[2], health[2], net_pay [2]);

net_pay[3] = (gross_pay[3] - (paye[3] - tax_credit[3])) + prsi[3] + usc[3] + union_sub [3] + health[3];
net_payslip_obj.net_payslip(emp_no[3],gross_pay[3], prsi[3], paye[3], usc[3], union_sub[3], health[3], net_pay [3]);

   cout <<"    "<< " ____________________________________________________________" <<endl;
   cout <<setw(5)<< "|" <<setw(43)<< "Electronic Funds Transfer File" <<setw(18)<< "|"<< endl;
   cout <<setw(5)<< "|" <<setw(61)<< "|"<< endl;
   cout <<setw(5)<< "|" <<setw(61)<< "|"<< endl;
   cout <<setw(5)<< "|" <<setw(20)<< "ACCOUNT Code" <<setw(26)<< "Net Pay" <<setw(15)<< "|"<< endl;
   cout <<setw(5)<< "|" <<setw(61)<< "|"<< endl;



   class bank_account account1 ( bank_acc [0], net_pay [0]);
   class bank_account account2 ( bank_acc [1], net_pay [1]);
   class bank_account account3 ( bank_acc [2], net_pay [2]);
   class bank_account account4 ( bank_acc [3], net_pay [3]);
   account1.display_acc_details ();
   account2.display_acc_details ();
   account3.display_acc_details ();
   account4.display_acc_details ();

   totals = net_pay[0] + net_pay[1] + net_pay[2] + net_pay[3];

   cout <<setw(5)<< "|" <<setw(61)<< "|"<< endl;
   cout <<setw(5)<< "|" <<setw(61)<< "|"<< endl;
   cout<<setw(5)<<"|"<<setw(17)<< "TOTAL"<<setw(28)<<totals<<setw(16)<<"|"<<endl;
   cout <<"    "<< "|____________________________________________________________|"<< endl;

}










