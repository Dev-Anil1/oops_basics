#include<iostream>
using namespace std;

class Greatest
{
private:
    int a,b,c,large;
public:
    void setA(int w)
    {
        a=w;
    }
    void setB(int y){
        b=y;
    }

    void setC(int z)
    {
        c=z;
    }
    int getA()
    {
        return a;
    }
    int getB()
    {
        return b;
    }
    int getC()
    {
        return c;
    }
    int getLarge()
    {
        return large;
    }

    void calculateLarge()
    {

        if(a>b && a>c)
            large=a;
        else if(b>a && b>c)
            large=b;
        else
            large=c;
    }

};



int main()
{
    Greatest g;
    g.setA(2);
    g.setB(11);
    g.setC(12);
    g.calculateLarge();
    cout<<g.getLarge();

    return 0;

}
