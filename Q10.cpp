#include<iostream>
using namespace std;
class Area
{
    private:
    float a,b,c;
    public:
    Area setdata(float x)
    {
        a=x;
    }
    Area setdata(float y,float z)
    {
        b=y;
        c=z;
    }
    void square()
    {
        cout<<"The area of square is "<<a*a;
    }
    void circle()
    {
        cout<<"\nThe area of circle is "<<22*a/7;
    }
    void rectangle()
    {
        cout<<"\nThe area of rectangle is "<<b*c;
    }
};
int main()
{
    Area s1,s2,s3;
    float j,k,l,n;
    cout<<"ENter the side of square ";
    cin>>j;
    s1.setdata(j);
    s1.square();
    cout<<"\nENter the radius of circle ";
    cin>>k;
    s2.setdata(k);
    s2.circle();
    cout<<"\nENter the length and breadth of ractangle  ";
    cin>>l>>n;
    s3.setdata(l,n);
    s3.rectangle();
}