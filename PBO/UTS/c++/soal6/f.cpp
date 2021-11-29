#include <iostream>
using namespace std;
int main()
{
  int x;
  int *p;
  int *q;

  *p = q;
  cout<<"*p = "<<*p<<endl;
  cout<<"q = "<<q<<endl;

  
  return 0;
}
/*
  f. *p = q;
-->Output:
  [Running] cd "c:\Users\USER\Documents\Matkul Kuliah S1\Matkul Semester 3\Pemrograman beorientasi objek\UTS\c++\soal6\" && g++ f.cpp -o f && "c:\Users\USER\Documents\Matkul Kuliah S1\Matkul Semester 3\Pemrograman beorientasi objek\UTS\c++\soal6\"f
  f.cpp: In function 'int main()':
  f.cpp:9:8: error: invalid conversion from 'int*' to 'int' [-fpermissive]
      9 |   *p = q;
        |        ^
        |        |
        |        int*

-->Penjelasan:
  f. *p = q;
  invalid--> invalid karena menggunakan *p

*/