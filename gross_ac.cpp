///CARL GRIFFITHS
#include <iostream>
#include <iomanip>
#include "gross_ac.h"
using namespace std ;

float gross_pay_class::basic_pay(float hours_p, float rate_p)
{
        dm_hours = hours_p;
        dm_rate = rate_p;

        if(dm_hours <= 40)
        {dm_basic_pay = dm_hours * dm_rate;}

        if (dm_hours >40)
        {dm_basic_pay = 40 * dm_rate;}

        return dm_basic_pay;
}
float gross_pay_class::overtime(float hours_p, float rate_p)
{
        dm_hours = hours_p;
        dm_rate = rate_p;

        if(dm_hours > 40 && dm_hours <= 50)
        {
            dm_overtime = (dm_hours - 40) * (dm_rate * 1.5)
        ;}

        return dm_overtime;
}
void gross_pay_class::display_basic_pay()
{
    cout << "Basic pay based on  " << dm_hours << " hours X " << dm_rate
    << " euro hourly rate : " << dm_basic_pay << endl ;
}

















