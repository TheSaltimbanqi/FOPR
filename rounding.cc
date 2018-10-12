#include <iostream>

int main()
{
  float a=0;
  std::cin >> a;

  if( (a-(int)a)==0 )
    std::cout << (int)a << " " << (int)a << " " << (int)a << '\n';
  else if( (a-(int)a)>=0.5 )
    std::cout << (int)a << " " << ((int)a+1) << " " << ((int)a+1) <<'\n';
  else
    std::cout << (int)a << " " << ((int)a+1) << " " << (int)a <<'\n';
  return 0;
}
