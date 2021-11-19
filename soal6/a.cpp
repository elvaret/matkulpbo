#include <iostream>
using namespace std;
int main()
{
  int x;
  int *p;
  int *q;

  p = q;
  cout<<"p = "<<p<<endl;
  cout<<"q = "<<q<<endl;

  return 0;
}

/*
a. p = q

-->Output:
[Running] cd "c:\Users\USER\Documents\Matkul Kuliah 
S1\Matkul Semester 3\Pemrograman beorientasi 
objek\UTS\c++\soal6\" && g++ a.cpp -o a && "c:\Users\USER\
Documents\Matkul Kuliah S1\Matkul Semester 3\Pemrograman 
beorientasi objek\UTS\c++\soal6\"a

// p = 0x10
// q = 0x10

-->Penjelasan
a. p = q
valid--> valid karena dua variable pointer dapat disamakan

*/
