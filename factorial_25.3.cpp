#include <iostream>
using namespace std;

class Factorial
{
private :
    int fact,n;
public :

    void setN(int a)
    {
        n=a;
    }
    int getN()
    {
        return n;
    }
    int getFactorial()
    {
        return fact;
    }
    void findfactorial()
    {
        int i;
        int f=1;
        if(n<=0)
        {
           fact=1;
           return;
        }
        for(i=1;i<=n;i++){
            f=f*i;
        }
        fact=f;
    }
};

int main()
{
    Factorial f1;
    f1.setN(5);
    f1.findfactorial();
    cout<<"factorial of "<<f1.getN()<<" is "<<f1.getFactorial()<<endl;

    return 0;
}
