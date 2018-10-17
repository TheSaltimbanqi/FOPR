#include <iostream>
int main()
{
  int x;
  while (std::cin >> x)
  {
    int maxVal=0;
    for(int i=0;i<x;++i)
    {
      int n=0;
      std::cin >> n;
      if(i==0)
        maxVal=n;
      if(maxVal<n)
        maxVal=n;
    }
    std::cout << maxVal << '\n';
  }
  return 0;
}
