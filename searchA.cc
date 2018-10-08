#include <iostream>

int main()
{
  char a;
  std::cin >> a;
  while(a!='.')
  {
    if(a=='a')
    {
      std::cout<<"yes\n";
      return 0;
    }
    std::cin >> a;
  }
  if(a=='.')
    std::cout << "no" << '\n';

  return 0;
}
