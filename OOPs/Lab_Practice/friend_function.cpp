#include <iostream>
using namespace std ;
class BankAccount
{
private:
    int acc;
    int bal;
public:
    void setDetails(int acc,int bal)
    {
        this->acc=acc;
        this->bal=bal;
    }
    friend int dos(BankAccount,BankAccount);
} ;
int dos(BankAccount c1,BankAccount c2)
{
    if((c1.bal-c2.bal)>0)
        return c1.bal-c2.bal;
    else
        return c2.bal-c1.bal;
}
int main()
{
   BankAccount c1,c2;
   c1.setDetails(1212,3400);
   c2.setDetails(1213,4400);
   cout<<"differnece of balance"<<dos(c1,c2)<<endl;
   return 0;
}