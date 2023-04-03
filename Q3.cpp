#include<iostream>
using namespace std;
class Factorial
{
    private:
    int n,s;
    public:
    Factorial setdata(int a)
    {
        n=a;
    }
    void finddata()
    {
        int i,f=1;
        for(i=1;i<=n;i++)
        {
            f=f*i;
        }
        return f;
    }
};
int main()
{
    Factorial f1;
    int x,s;
    cout<<"Enter the value of any number: ";
    cin>>x;
    f1.setdata(x);
    s=f1.finddata();
    cout<<"The factorial is "<<s;
}