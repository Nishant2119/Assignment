#include<iostream>
using namespace std;
class Test
{
    public:
        virtual void square() = 0;
};
class Arithmetic : public Test
{
    public:
        void square();
};
class ToTestInt
{
    Arithmetic data;
};