-->Output 
Baris 9: &num1 = 0x78fe14, p = 0x78fe14

Penjelasan untuk '&num1 = 0x78fe14'  
a). &num1 merupakan alamat dari variabel int num1=5;

Penjelasan untuk 'p = 0x78fe14'  
a). p = &num1
b). Maka p sama dengan alamat dari &num1 yakni 0x78fe14



 -->Output
Baris 10: num1 = 5, *p = 5

Penjelasan untuk 'num1 = 5'
a). int num 1 = 5 sesuai deklarasi awal

Penjelasan untuk '*p = 5'
a). p = &num1
b). num1 = 5
c). *p = num1
d). *p = 5



-->Output
Baris 12: num1 = 10, *p = 10
Penjelasan untuk 'num1 = 10'
a). *p = 10 -->line 18
b). p=&num1
c). num1 = *p
d). num1 = 10

Penjelasan untuk '*p = 10'
a). *p = 10 --> deklarasi di line 18



--> Output
Baris 14: &num2 = 0x78fe10, p = 0x78fe10
Penjelasan untuk '&num2 = 0x78fe10'
a). p = &num2 -->deklarasi di line 22
b). &num2 merupakan alamat dari variabel int num2 = 8;

Penjelasan untuk 'p = 0x78fe10'
a). p = &num2
b). p merupakan alamat dari int num2 = 8


--> Output
Baris 15: num2 = 8, *p = 8
Penjelasan untuk 'num2 = 8'
a). p = &num2 -->deklarasi di line 22
b). num2 = 8

Penjelasan untuk '*p = 8'
a). p = &num2
b). *p = 8


--> Output
Baris 17: num2 = 16, *p = 16
Penjelasan untuk 'num2 = 16'
a). p = &num2
b). *p = num2
c). *p = 2 * (*p)
d). num2 = 2 * (num2)
e). num2 = 2 * 8
f). num2 = 16
Penjelasan untuk '*p = 16'
a). *p = 2 * (*p)
b). *p = 8
c). *p = 2 * 8
d). *p = 16
