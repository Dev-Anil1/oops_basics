#include<iostream>
using namespace std;

class Complex
{
private :
    int real,img;
public :
    void set(int r,int i)
    {
        real=r;
        img=i;
    }
    void print()
    {
        cout<<real<<"+"<<img<<"i"<<endl;
    }
};


int main()
{
    Complex c1,c2;
    c1.set(4,5);
    c1.print();
    c2.set(7,8);
    c2.print();
    return 0;
}
