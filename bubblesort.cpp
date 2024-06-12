#include <iostream>
void bubble(std::vector<int>* vect);

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

void bubble(std::vector<int>* vect)
{
  for(int i = 0; i < vect->size() - 1; i++)
  {
    for(int j = i; j < vect->size()-i-1; j++)
    {
      if((*vect)[i]<(*vect)[j])
      {
        int temp = (*vect)[i];
        (*vect)[i] = (*vect)[j];
        (*vect)[j] = temp;
      }
    }
  }
}
