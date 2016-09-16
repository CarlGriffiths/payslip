
#include <iostream>
#include <iomanip>
#include "bank_ac.h"

using namespace std ;
bank_account::bank_account(int acc_no, double initial_netpay)
{
    dm_account_number = acc_no;
    dm_balance = initial_netpay ;
}

float bank_account::deposit_method(float amount)
    {
        dm_balance = dm_balance + amount;
        return dm_balance;
    }

void bank_account::display_acc_details()
    {
        cout << setw(5) << "|" << setw(20) << dm_account_number << setw(25) << fixed << setprecision(2)
        << dm_balance << setw(16) << "|" << endl;
    }
