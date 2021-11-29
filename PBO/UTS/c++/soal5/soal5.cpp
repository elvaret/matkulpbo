#include <iostream>

using namespace std;

int main()
{
	int *p;
	int num1 = 5; 
           int num2 = 8;

	p = &num1; 

	cout << "Baris 9: &num1 = " << &num1
         << ", p = " << p << endl;

	cout << " Baris 10: num1 = " << num1
         << ", *p = " << *p << endl;
*p = 10;
	cout << " Baris 12: num1 = " << num1
         << ", *p = " << *p << endl << endl; 

	p = &num2; 
	cout << " Baris 14: &num2 = " << &num2
         << ", p = " << p << endl; 
	cout << " Baris 15: num2 = " << num2
         << ", *p = " << *p << endl;

	*p = 2 * (*p);
	cout << " Baris 17: num2 = " << num2
         << ", *p = " << *p << endl;

	return 0;
}
