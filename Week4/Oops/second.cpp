#include<iostream>
using namespace std;
class Outer
{
    public:
        void display();
        class Inner
        {
            public:
                void display();
        };
};
void Outer::display()
{
    cout<<"This is the function of the outer class"<<endl;
}
void Outer::Inner::display()
{
    cout<<"This is the function of the inner class"<<endl;
}
int main()
{
    Outer newouter ;
    newouter.display();
    Outer::Inner newinner;
    newinner.display();
}