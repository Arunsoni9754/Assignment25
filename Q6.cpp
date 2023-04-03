#include<iostream>
using namespace std;

class square
{
    private:
    int n;
    static int count;
    public:
    square setdata(int a)
    {
        n=a;
        count++;
    }
    void equal()
    {
        count++;
        cout<<"\nThe square of the number is "<<n*n;
        cout<<"\nthe no. of times the function called is "<<count;
    }

};

int square::count;
int main()
{
    square s1,s2;
    int x;
    cout<<"Enter the number : ";
    cin>>x;
    s1.setdata(x);
    s1.equal();
    s2.setdata(x);
    s2.equal();
}