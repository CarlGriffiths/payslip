///CARL GRIFFITHS
#if !defined BANK_AC_H
#define BANK_AC_H

class bank_account
{
public:
    bank_account(int acc_no, double initial_netpay );
    float deposit_method(float amount);
    void display_acc_details();

private:
    int dm_account_number;
    float dm_balance;
};
#endif

