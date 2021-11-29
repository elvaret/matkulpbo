#include <iostream>
using namespace std;
int main()
{
  int x;
  int *p;
  int *q;

  *p = q*;
  cout<<"*p = "<<*p<<endl;
  cout<<"*q = "<<*q<<endl;

  
  return 0;
}

/*
  d.	*p = *q;

-->Output:
  [Running] cd "c:\Users\USER\Documents\Matkul Kuliah S1\Matkul Semester 3\Pemrograman beorientasi objek\UTS\c++\soal6\" && g++ d.cpp -o d && "c:\Users\USER\Documents\Matkul Kuliah S1\Matkul Semester 3\Pemrograman beorientasi objek\UTS\c++\soal6\"d
  d.cpp: In function 'int main()':
  d.cpp:9:10: error: expected primary-expression before ';' token
      9 |   *p = q*;
        |          ^


-->Penjelasan:
  d.	*p = *q;
  invalid--> invalid karena Pointer p harus digunakan hanya 
  dengan nama variabel p, Tanpa tanda bintang. *q valid 
*/