#include <iostream>
int main()
{
  int n;
  while(std::cin >> n)
  {
    int a = n;
    int r=0;
    while (a >= 10)
    {
      r += a % 10;
      a /= 10;
    }
    r += a;
    std::cout << "The sum of the digits of "<< n <<" is "<< r <<"." << '\n';
  }
  return 0;
}
