#include<iostream>
using namespace std;
class Compartment
{
    private:
        int seats;
    public:
        virtual string notice()=0;
        ~Compartment();
};
class FirstClass:public Compartment
{
    public:
        string notice();

};
class Ladies:public Compartment
{
    public:
        string notice();
};
class General:public Compartment
{
    public:
        string notice();
};
class Luggage: public Compartment
{
    public: 
        string notice();
};
int main()
{
    Compartment* arr[10];
    arr[0] = new Luggage();
    arr[0]->notice();
}
string FirstClass :: notice()
{
   return "This is a FirstClass compartment.";
}
string Ladies :: notice()
{
    return "This is a Ladies compartment";
}
string General :: notice()
{
    return "This is a General compartment";
}
string Luggage :: notice()
{
    return "This is a Luggage compartment";
}