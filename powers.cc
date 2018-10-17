#include <iostream>
int main()
{
  int x, n;
  while (std::cin >> x >> n)
  {
    int r=1;
    for(int i=n;i!=0;--i)
    {
      r*=x;
    }
    std::cout << r << '\n';
  }

  return 0;
}
