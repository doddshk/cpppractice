#include <iostream>

int main()
{
  std::vector<int> vect;
  vect.push_back(1);
  vect.push_back(7);
  vect.push_back(2);
  vect.push_back(3);
  for(const int n : vect)
  {
    std::cout<<n;
  }
  std::cout<<"\n";
  bubble(&vect);
  for(const int n : vect)
  {
    std::cout<<n;
  }
  return 0;
}
