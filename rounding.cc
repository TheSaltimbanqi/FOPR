#include <iostream>

int main()
{
  double a=0;
  std::cin >> a;

  if( (a-(unsigned long)a)==0 )
    std::cout << (unsigned long)a << " " << (unsigned long)a << " " << (unsigned long)a << '\n';
  else if( (a-(double)((unsigned long)a))>=0.5 )
    std::cout << (unsigned long)a << " " << ((unsigned long)a+1) << " " << ((unsigned long)a+1) <<'\n';
  else
    std::cout << (unsigned long)a << " " << ((unsigned long)a+1) << " " << (unsigned long)a <<'\n';
  return 0;
}
