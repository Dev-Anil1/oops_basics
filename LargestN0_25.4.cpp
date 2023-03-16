#include<iostream>
using namespace std;

class LargestNo
{
    private :
        int a,b,c,largest;
    public :
        void setNo(int x,int y,int z)
        {
            a=x;
            b=y;
            c=z;
        }
        int getlarge()
        {
            return largest;
        }
        int geta()
        {

            return a;
        }
        int getb()
        {
            return b;
        }
        int getc()
        {
            return c;
        }
        void large()
        {
            if(a>b && a>c)
                largest=a;
            else if(b>c && b>a)
                largest=b;
            else
                largest =c;
        }
};

int main()
{
    LargestNo l1,l2;
    l1.setNo(1,2,1);
    l1.large();
    cout<<"Largest is "<<l1.getlarge()<<endl;

    int a,b,c;
    cout<<"enter three no"<<endl;
    cin>>a>>b>>c;
    l2.setNo(a,b,c);
    l2.large();
    cout<<"Largest is "<<l2.getlarge()<<endl;
    return 0;
}
