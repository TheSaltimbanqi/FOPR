#include <iostream>
int main()
{
  int h, m, s;
  std::cin >> h >> m >> s;
  s++;
  if(s>=60)
  {
    s=0; m++;
  }
  if(m>=60)
  {
    m=0; h++;
  }
  if(h>=24)
    h=0;
    
  //Print time
  if(h<10)
    std::cout << "0" << h << ":";
  else
    std::cout << h << ":";
  if(m<10)
    std::cout << "0" << m << ":";
  else
    std::cout << m << ":";
  if(s<10)
    std::cout << "0" << s << '\n';
  else
    std::cout << s << "\n";
}
