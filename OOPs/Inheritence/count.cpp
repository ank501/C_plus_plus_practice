#include <iostream>
using namespace std ;
class Counter
{
    public:
        static int c;
        static string college;
        void count()
        {
            c++;
            cout<<"c="<<c<<endl;
        }
};
int Counter::c=0;
string Counter::college="UIT";
int main()
{
    Counter *c1=new Counter();
    Counter *c2=new Counter();
    Counter *c3=new Counter();
    c1->count();
    c2->count();
    c3->count();
    cout<<Counter::c;
    return 0;
}