#if !defined TAX_AC_H
#define TAX_AC_H

class tax_pay_class
{
public:
    float prsi (float gross_p);
    float paye (float gross_p);
    float usc (float gross_p);

private:
    float dm_prsi;
    float dm_gross;
    float dm_paye;
    float dm_usc;
};
#endif

