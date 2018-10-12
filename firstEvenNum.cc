#include <iostream>

int main()
{
  int a=0, n=1;
  std::cin >> a;
  while (a%2!=0)
  {
    n++;
    std::cin >> a;
  }
  std::cout << n << '\n';
  return 0;
}
