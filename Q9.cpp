#include<iostream>
using namespace std;
class Circle
{
    private:
    float a;
    public:
    Circle setdata(float x)
    {
        a=x;
    }
    void area()
    {
        cout<<"The area of the circle is"<<22*a/7;
    }
};
int main()
{
    Circle c1;
    float d;
    cout<<"ENter the radius ";
    cin>>d;
    c1.setdata(d);
    c1.area();
}