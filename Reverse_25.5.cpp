#include<iostream>
using namespace std;

class ReverseNumber
{
private :
    int n,rev;
public :
    void set(int a)
    {
        n=a;
    }
    int getN()
    {
        return n;
    }
    int getrevrse()
    {
        return rev;
    }
    void calculateReverse()
    {
        int i,re=0,a;
        for(i=0;n;i++)
        {
            a=n%10;
            re=re*10+a;
            n=n/10;
        }
        rev=re;
    }
};

int main()
{
    ReverseNumber r;
    r.set(1245);
    r.calculateReverse();
    cout<<"Reverse of "<<r.getN()<<" is "<<r.getrevrse();
    return 0;
}
