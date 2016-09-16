#if !defined NET_PAYSLIP_H
#define NET_PAYSLIP_H
class net_payslip_class
{

    public:
        float net_payslip(int emp_no_p, float gross_p, float prsi_p, float paye_p, float usc_p, float union_sub_p, float health_p, float net_pay_p);
        void display_basic_pay();
    private:
        int dm_employee_no;
        float dm_gross;
        float dm_prsi;
        float dm_paye;
        float dm_netpay;
        float dm_usc;
        float dm_health;
        float dm_union;
};
#endif






