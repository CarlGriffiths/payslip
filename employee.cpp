///CARL GRIFFITHS
#include <iostream>
#include <iomanip>
#include "employee.h"
using namespace std ;

new_employee::new_employee()
{
  cout << "Enter Employee Number: " << endl ;
  cin >> dm_employee_no ;
  cout << "Enter hours worked: " ;
  cin >> dm_hours ;
  cout << "Enter hourly rate: " ;
  cin >> dm_rate ;
}


class permanent_employee : public new_employee

{
public:
  permanent_employee() ;
private:
  int dm_union ;
  int dm_vhi ;
} ;


permanent_employee::permanent_employee()
{
  cout << "Enter Union Fee: " ;
  cin >> dm_union ;
  cout << "Enter VHI Decuction: " ;
  cin >> dm_vhi ;
}
















