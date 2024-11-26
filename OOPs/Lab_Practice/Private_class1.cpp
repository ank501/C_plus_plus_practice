#include <iostream>
using namespace std ;
class Bank
{
    private:
        int accno;
    protected:
        string name;
    public:
        int ph;
        void set(int accno)
        {
            this->accno=accno;
        }
        int get()
        {
            return accno;
        }
};
class Customer:public Bank
{
    public:
        Customer(int accno,string name,int ph)
        {
            set(accno);
            this->name=name;
            this->ph=ph;
        }
        void disp()
        {
            cout<<"acc="<<get()<<endl;
            cout<<"name="<<name<<endl;
            cout<<"ph="<<ph<<endl;
        }

};
int main()
{
    Customer *c1=new Customer(121,"gaurav",9580);
    c1->disp();
   return 0;
}