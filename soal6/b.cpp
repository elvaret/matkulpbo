#include <iostream>
using namespace std;
int main()
{
  int x;
  int *p;
  int *q;

  *p = 56;
  cout<<"*p = "<<*p<<endl;
 
  
  return 0;
}

/*
b. *p = 56

-->Output
[Running] cd "c:\Users\USER\Documents\Matkul Kuliah S1\
Matkul Semester 3\Pemrograman beorientasi objek\UTS\c++\
soal6\" && g++ b.cpp -o b && "c:\Users\USER\Documents\Matkul 
Kuliah S1\Matkul Semester 3\Pemrograman beorientasi objek\UTS\
c++\soal6\"b

//Tidak menampilkan apa-apa

-->Penjelasan:
b. *p = 56
invalid--> invalid karena harus menggunakan '&' sebelum x 
dan mengetik p = &x; *p = 56; atau mengetik p = new int;

*/