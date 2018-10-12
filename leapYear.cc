#include <iostream>

int main()
{
  int y=0;
  std::cin >> y;
  if(y%4==0)
  {
    if(y%100==0)
      std::cout << ((y%400==0)?"YES":"NO") << '\n';
    else
      std::cout << "YES" << '\n';
  }
  else
    std::cout << "NO" << '\n';

  return 0;
}
