#include <iostream>
int main()
{
  int n;
  while(std::cin >> n)
  {
    if(n<10)
      std::cout << "The product of the digits of "<< n <<" is "<< n <<"." << '\n';

    while (n >= 10)
    {
      int a = n;
      int r=1;
      while (a >= 10)
      {
        r *= a % 10;
        a /= 10;
      }
      r *= a;
      std::cout << "The product of the digits of "<< n <<" is "<< r <<"." << '\n';
      n = r;
    }
    std::cout << "----------" << '\n';
  }
  return 0;
}
