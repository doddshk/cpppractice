#include <iostream>
#include "bubble.h"

void bubble::bubble(std::vector<int>* vect)
{
  for(int i = 0; i < vect->size() - 1; i++)
  {
    for(int j = i; j < vect->size()-i-1; j++)
    {
      if((*vect)[j+1]<(*vect)[j])
      {
        int temp = (*vect)[j];
        (*vect)[j] = (*vect)[j+1];
        (*vect)[j+1] = temp;
      }
    }
  }
}
