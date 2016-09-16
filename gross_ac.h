///CARL GRIFFITHS
#if !defined GROSS_AC_H
#define GROSS_AC_H

class gross_pay_class
{
/// DECLARING METHODS AND DATA MEMBERS
public:
        float basic_pay(float hours_p, float rate_p);
        float overtime(float hours_p, float rate_p);
        float weekly_salary(float annual_salary);
        void display_basic_pay();
private: /// DATA MEMBERS
        float dm_hours;
        float dm_rate;
        float dm_basic_pay;
        float dm_overtime;
        float dm_weekly_salary;
        float dm_annual_salary;
};

#endif

