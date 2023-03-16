#include<iostream>
using namespace std;

class Rectangle
{
private :
    int l,b,area;
public :
    void setl(int a)
    {
        l=a;
    }
    void setb(int q)
    {
        b=q;
    }
    int getArea()
    {
        return area;
    }
    int getl()
    {
        return l;
    }
    int getb()
    {
        return b;
    }

    int calculateArea()
    {
        area=l*b;
        return area;
    }
};



int main()
{
    Rectangle r;
    r.setl(5);
    r.setb(4);
    r.calculateArea();
    cout<<r.getArea();

    return 0;
}

