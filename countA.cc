#include <iostream>

int main()
{
  char a;
  int n=0;
  std::cin >> a;
  while(a!='.')
  {
    if(a=='a')
      n++;
    std::cin >> a;
  }
  if(a=='.')
  std::cout << n << '\n';

  return 0;
}
