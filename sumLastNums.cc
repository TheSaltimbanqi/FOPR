#include <iostream>
int main()
{
  int n=0;
  std::cin >> n;
  int a=0, b=0, c=0;
  n%=1000;
  a=n%10;
  b=(n/10)%10;
  c=(n/100)%10;
  std::cout << a+b+c << '\n';
  return 0;
}
