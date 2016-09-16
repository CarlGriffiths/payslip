///CARL GRIFFITHS
#include <iostream>
#include <iomanip>
#include "tax_ac.h"

using namespace std;

float tax_pay_class::prsi (float gross_p)
{
    dm_gross = gross_p;
    return dm_gross *.04;
}

float tax_pay_class::paye (float gross_p)
{
        dm_gross = gross_p;
        if (gross_p <= 630.77)
        {
            return (dm_gross * 0.2);
        }

        else
        {
            return ((dm_gross - 630.77) * 0.41 + (630.77 * 0.2));
        }
}

float tax_pay_class::usc (float gross_p)
{
    dm_gross = gross_p;

    if (gross_p <= 193)
    {
        return(dm_gross * 0.02);
    }

    else if (gross_p > 193 && gross_p <= 308)
    {
        return (dm_gross * 0.04 + (193 * 0.02));
    }

    else
    {
        return ((dm_gross - 308) * 0.07 + (115 * 0.04 + (193 * 0.02)));
    }
}

