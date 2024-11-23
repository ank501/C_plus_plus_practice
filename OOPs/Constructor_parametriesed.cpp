//parameterized constructor
#include <iostream>
using namespace std;
class Student
{
    public:
        int roll;
        string name;
        Student(int r,string s)
        {
            cout<<"object created..."<<endl;
            roll=r;
            name=s;
        }
        void getData()
        {
            cout<<"roll="<<roll<<",name="<<name<<endl;

        }

};
int main()
{
    Student *s1=new Student(123,"sneha");
    s1->getData();
    return 0;
}