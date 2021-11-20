#include <iostream>
using namespace std;
int main()
{
  int x;
  int y;
  int *p = &x;
  int *q = &y;
  x = 35; y = 46;
  p = q;
  *p = 78;
  cout<< x <<" "<< y << endl;
  cout<< *p <<" "<< *q << endl;
  return 0;
}

