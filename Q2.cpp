#include<iostream>
using namespace std;
class Time
{
    private:
        int h,m,s;
    public: 
        Time setdata(int a,int b,int c)
        {
            h=a;
            m=b;
            s=c;
        }
        Time showdata()
        {
            cout<<"The time is "<<h<<" hr "<<m<<" min "<<s<<" sec ";
        }
        
};
int main()
{
    Time t1,t2;
    t1.setdata(3,45,56);
    cout<<endl;
    t2.setdata(2,48,43);
    cout<<endl;
    t1.showdata();
    cout<<endl;
    t2.showdata();

}