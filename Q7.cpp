#include<iostream>
using namespace std;
class Greatest
{
    private:
    int a,b,c;
    public:
        Greatest setdata(int x,int y,int z)
        {
            a=x;
            b=y;
            c=z;
        }
        void largest()
        {
            if(a>b&&a>c)
            {
                cout<<a<<" is largest ";
            }
            else if(b>a&&b>c)
            {
                cout<<b<<" is largest";
            }
            else if(a==b&&b==c&&a==c)
            {
                cout<<"All are equal";
            }
            else
            {
                cout<<c<<" is largest";
            }
        }
};
int main()
{
    Greatest l1;
    int j,k,l;
    cout<<"Enter any three number:\n";
    cin>>j>>k>>l;
    l1.setdata(j,k,l);
    l1.largest();
}