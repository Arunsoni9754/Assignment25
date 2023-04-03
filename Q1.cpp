#include<iostream>
using namespace std;
class complex
{
    private:
        int a,b;//a=real and b=imaginary
    public:
        complex setdata(int x, int y)
        {
            a=x;
            b=y;
        }
        void showdata()
        {
            cout<<a<<"+i"<<b;
        }
};
int main()
{
    complex c1,c2;
    c1.setdata(2,4);
    c2.setdata(3,5);
    c1.showdata();
    cout<<endl;
    c2.showdata();
}