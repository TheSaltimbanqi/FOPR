#include <iostream>

int absolute(int n)
{
  int x = n;
  if(x<0) x*=-1;
  return x;
}

int main()
{
  int a;
  std::cin >> a;
  std::cout << absolute(a) << '\n';
}
