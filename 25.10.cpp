#include<iostream>
using namespace std;

class Area
{
private :
    int length,breadth,side,radius,areaOfRectangle,areaOfSquare;
    float areaOfCircle;
public :
    void setlen(int a)
    {
        length=a;
    }
    void setbreadth(int b)
    {
        breadth=b;
    }
    void setside(int a)
    {
        side=a;
    }
    void setradius(int b)
    {
        radius=b;
    }
    int getareaofrectangle()
    {
        return areaOfRectangle;
    }
    int getareaofsquare()
    {
        return areaOfSquare;
    }
    float getareaofcircle()
    {
        return areaOfCircle;
    }

    void calcarearectangle()
    {
        areaOfRectangle=length*breadth;
    }

    void areasquare()
    {
        areaOfSquare=side*side;
    }

    void areacircle()
    {
        areaOfCircle=3.14*radius*radius;
    }
};

int main()
{
    Area a1,a2,a4;
    a1.setlen(2);
    a1.setbreadth(4);
    a1.calcarearectangle();
    cout<<a1.getareaofrectangle()<<endl;

    a2.setside(4);
    a2.areasquare();
    cout<<a2.getareaofsquare()<<endl;

    a4.setradius(4);
    a4.areacircle();
    cout<<a4.getareaofcircle()<<endl;
    return 0;
}
