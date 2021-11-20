#include <iostream>  
using namespace std;  
int main()  
{  
  void *ptr;   // deklarasi void pointer
  int a=9;   // inisialisasi variable a bertipe integer 
  ptr=&a;   // menampung alamat dari variable 'a' ke dalam variable void pointer  
  cout << &a << endl;  
  cout << ptr << endl;  
  return 0;  
}  