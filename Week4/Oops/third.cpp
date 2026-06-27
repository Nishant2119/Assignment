#include<iostream>
using namespace std;
class Point 
{
    private:
        int x,y;
    public:
        Point();
        Point(int x,int y);
};
int main()
{
    Point abc(5,6);
    
}
Point::Point()
{
    this -> x = 0;
     this -> y = 0;
}
Point::Point(int x, int y)
{
    this -> x = x;
    this -> y = y;
}