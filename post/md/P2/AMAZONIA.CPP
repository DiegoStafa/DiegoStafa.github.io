#include <iostream>
#include <vector>
using namespace std;

enum Laurea
{
    Informatica,
    Ingegneria,
    Altro
};

class ICTstaff
{
private:
    double stipendio;
    Laurea laurea;
    bool magistrale;

public:
    virtual ICTstaff *Clone() const = 0;
    virtual double Salary() const = 0;
    virtual bool operator==(const ICTstaff &i) const { return stipendio == i.stipendio && laurea == i.laurea && magistrale == i.magistrale; }
    virtual bool operator!=(const ICTstaff &i) const { return !(*this == i); }
    double GetStipendio() const { return stipendio; }
    void SetStipendio(double s) { stipendio = s; }
};

class SwEngineer : public ICTstaff
{
private:
    bool sicurezza;

public:
    bool operator==(const ICTstaff &sw) const override { return ICTstaff::operator==(sw) && static_cast<const SwEngineer &>(sw).sicurezza == sicurezza; }
    bool operator!=(const ICTstaff &i) const { return !(*this == i); }
    SwEngineer *Clone() const { return new SwEngineer(*this); }
    double Salary() const { return GetStipendio() + (sicurezza) ? 500 : 0; }
};

class HwEngineer : public ICTstaff
{
private:
    int num_trasferte;

public:
    bool operator==(const ICTstaff &hw) const override { return ICTstaff::operator==(hw) && static_cast<const HwEngineer &>(hw).num_trasferte == num_trasferte; }
    bool operator!=(const ICTstaff &i) const { return !(*this == i); }
    HwEngineer *Clone() const { return new HwEngineer(*this); }
    double Salary() const { return GetStipendio() + num_trasferte * 300; }
};

class Amazonia
{
private:
    class SmartP
    {
    public:
        ICTstaff *i;
        SmartP(ICTstaff *ict) : i(ict->Clone()) {}
        SmartP(const SmartP &sp) : i(sp.i->Clone()) {}
        ~SmartP() { delete i; }
        SmartP &operator=(const SmartP &sp)
        {
            if (this->i != sp.i)
            {
                delete i;
                i = sp.i->Clone();
            }
            return *this;
        }
    };

public:
};