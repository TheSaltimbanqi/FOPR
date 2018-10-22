#include <iostream>

bool es_ascendent(int n)
{
  int a=n, b=0, last=-1, curr;
  bool isUpward=true;

  while(a!=0 && a>0 && isUpward)
  {
    b=a%10;
    a/=10;
    curr=b;
    if(last != -1)
    {
      if(last-1!=curr)
        isUpward=false;
      else if(curr==9 && last!=0)
        isUpward=false;
    }
    last=curr;
  }
  return isUpward;
}

int main()
{
  int x, found=0;
  while(std::cin >> x)
  {
    if(es_ascendent(x))
      found++;
  }
  if(found>=2)
    std::cout << "SI" << '\n';
  else
    std::cout << "NO" << '\n';
}
