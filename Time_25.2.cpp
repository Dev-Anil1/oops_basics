#include<iostream>
using namespace std;

class Time
{
private:
    int hrs,mint,sec;
public:
    void set_time(int h,int m,int s)
    {
        hrs=h;
        mint=m;
        sec=s;
    }
    void display()
    {
        cout<<hrs<<" hr "<<mint<<" min "<<sec<<" sec "<<endl;
    }
};

int main()
{
    Time t1;
    t1.set_time(02,46,20);
    t1.display();
    return 0;
}
