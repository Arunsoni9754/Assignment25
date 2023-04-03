#include<iostream>
using namespace std;
class ReverseNumber
{
    private:
        int a;
    public:
        ReverseNumber setdata(int x)
        {
            a=x;
        }
        void reverse()
        { int s;
            while(a!=0)
            {
                s=a%10;
                a=a/10;
                cout<<s;
            }
        }
};
int main()

{
    ReverseNumber r1;
    int d;
    cout<<"Enter the number to be reversed : ";
    cin>>d;
    r1.setdata(d);
    cout<<"The reverse number is "; r1.reverse();
}