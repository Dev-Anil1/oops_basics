#include<iostream>
using namespace std;

class Area
{
private :
    int r;
    float area;
public :
    void setr(int a)
    {
        r=a;
    }
    float getarea()
    {
        return area;
    }
    int calculatearea()
    {
        area=3.14*r*r;
        return area;
    }
};

int main()
{
    Area a;
    a.setr(4);
    a.calculatearea();
    cout<<a.getarea();

    return 0;
}
