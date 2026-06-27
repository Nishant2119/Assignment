#include<iostream>
using namespace std;
class box
{
    private:
        int length;
        int breadth;
    public:
        box(int length,int breadth);
        void setlength(int length);
        void setbreadth(int breadth);
        int getlength();
        int getbreadth();
        int area();
};
class box3d : public box
{
    private:
        int height;
    public:
        box3d(int length,int breadth,int height):box(length,breadth)
        {
            this -> height = height;
        }
        int volume();
};
box::box(int length,int breadth)
{
    this -> length = length;
    this -> breadth = breadth;
}
int box::getlength()
{
    return length;
}
int box::getbreadth()
{
    return breadth;
}
int box::area()
{
    return length * breadth;
}
int box3d::volume()
{
    return getlength() * getbreadth() * height;
}
