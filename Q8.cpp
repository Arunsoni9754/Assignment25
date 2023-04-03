#include<iostream>
using namespace std;
class Rectangle
{
    private:
    float a,b;
    public:
    Rectangle setdata(float x,float y)
    {
        a=x;
        b=y;
    }
    void area()
    {
        cout<<"\nArea of the rectangle is:"<<a*b;
    }
};
int main()
{
    Rectangle a1;
    float l,s;
    cout<<"Enter the length and breadth of rectangle repsectively: ";
    cin>>l>>s;
    a1.setdata(l,s);
    a1.area();
}