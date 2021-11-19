#include <iostream>
using namespace std;
int main()
{
  int x;
  int *p;
  int *q;

  p = x;
  cout<<"p = "<<p<<endl;
  cout<<"x = "<<x<<endl;

  
  return 0;
}
/*
  c. p = x
  
-->Output:
  [Running] cd "c:\Users\USER\Documents\Matkul Kuliah S1\Matkul Semester 3\Pemrograman beorientasi objek\UTS\c++\soal6\" && g++ b.cpp -o b && "c:\Users\USER\Documents\Matkul Kuliah S1\Matkul Semester 3\Pemrograman beorientasi objek\UTS\c++\soal6\"b
  b.cpp: In function 'int main()':
  b.cpp:9:7: error: invalid conversion from 'int' to 'int*' [-fpermissive]
      9 |   p = x;
        |       ^
        |       |
        |       int


-->Penjelasan:
c. p = x
invalid-->invalid karena p adalah sebuah variable pointer bertipe integer dan x juga adalah integer. p hanya dapat menampung alamat dari variable bertipe integer bukan nilainya.

*/
