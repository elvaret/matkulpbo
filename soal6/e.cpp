#include <iostream>
using namespace std;
int main()
{
  int x;
  int *p;
  int *q;

  q = &x;
  cout<<"q = "<<q<<endl;
  cout<<"&x = "<<&x<<endl;
  return 0;
}
/*
  e. q = &x;
-->Output:
  [Running] cd "c:\Users\USER\Documents\Matkul Kuliah S1\Matkul Semester 3\Pemrograman beorientasi objek\UTS\c++\soal6\" && g++ e.cpp -o e && "c:\Users\USER\Documents\Matkul Kuliah S1\Matkul Semester 3\Pemrograman beorientasi objek\UTS\c++\soal6\"e
  q = 0x78fe14
  &x = 0x78fe14

-->Penjelasan:
  e. q = &x;
  valid--> valid karena q merupakan variable pointer dan 
  dapat menunjuk ke alamat x ('&x');

*/