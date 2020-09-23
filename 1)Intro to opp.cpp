#include <iostream>
#include <string.h>
using namespace std;

class Bus{
private:
  int x,y;
public:
  Bus()
  {
    this->x=30;
    this->y=50;
  }

  Bus(int x,int y)
  {
    this->x=x;
    this->y=y;
  }

  void setter(int x,int y)
  {
    this->x=x;
    this->y=y;
  }

  void print()
  {
    cout<<x<<" "<<y;
  }
};

int main()
{
  Bus s(100,200);
  s.setter(10,20);
  s.print();

  return 0;
}
