#include <iostream>
#include <vector>

int main()
{
  int a;

  while (std::cin >> a)
  {
    std::vector<int> v;

    for(int i=0;i<a && a>0;++i)
    {
      int x;
      std::cin >> x;
      v.push_back(x);
    }
    for(int i=(a-1);i>=0 && a>0;--i)
    {
      std::cout << v[i] << ' ';
    }
    std::cout << '\n';
  }
}
