#include <iostream>
using namespace std;

class Payment
{
    public:
        virtual void pay() = 0;

        virtual ~Payment() = default;
};

class UPI : public Payment
{
   public:
    void pay() override
    {
        cout << " Paying throught UPI\n";
    }

};

class CreditCard : public Payment
{
    public:
        void pay() override
        {
            cout << " Paying through Credit card\n";
        }

};

int main()
{
   
    Payment* p;
    CreditCard cc;
    UPI upi;

    p = &cc;
    p->pay();
    cout << endl;
    p = &upi;
    p->pay();
    cout << endl;
    

    return 0;
}