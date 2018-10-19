#include <iostream>

int main()
{
  int a;
  while (std::cin >> a)
  {
    int max;
    int i=0;
    while (i<a)
    {
      int n=0;
      std::cin>>n;
      if(i==0)
        max=n;
      else if(n>max)
      {
        max=n;
      }
      i++;
    }
    std::cout << max << '\n';
  }
}
