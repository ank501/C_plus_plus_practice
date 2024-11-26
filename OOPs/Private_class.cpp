#include <iostream>
using namespace std ;
class Calculator
{
    private:
        void add(int x,int y)
        {
            cout<<"add="<<x+y<<endl;
        }
    public:
    void calculateSum(int x,int y)
    {
        add(x,y);
    }
};
int main()
{
    Calculator *c=new Calculator();
    c->calculateSum(2,3);
   return 0;
}