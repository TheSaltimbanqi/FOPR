#include <iostream>
#include <string>
int main()
{
  std::string x;
  std::cin >> x;
  int maxSeq=1;

  std::string a;
  int seq=1;
  while (std::cin >> a)
  {
    /*
    get word -> compare
    if == => ++ else =1
    */
    if (a==x)
      seq++;
    else
      seq=0;

    if(seq>maxSeq)
      maxSeq=seq;
  }
  std::cout << maxSeq << '\n';
  return 0;
}
