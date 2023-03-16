#include <iostream>

using namespace std;


class Square{
  private :
  int side,sq;
  static int count;
  public :
  void setSide(int x){side=x;}
  int getSide(){return side;}
  int getSquare(){return sq;}
  static void setcount(int z){count=z;}
  static int getcount(){return count;}

  void calculateSquare(){
      sq=side*side;
      count++;
  }

};

int Square :: count;

int main() {
  Square s;
  Square::setcount(0);
  s.setSide(5);
  s.calculateSquare();
  cout<<s.getSquare()<<endl;
  cout<<Square::getcount();
  return 0;
}
