a. p = q
valid--> valid karena dua variable pointer dapat disamakan

b. *p = 56
invalid--> invalid karena harus menggunakan '&' sebelum x dan mengetik p = &x; *p = 56; atau mengetik p = new int;
         
c. p = x
invalid-->invalid karena p adalah sebuah variable pointer bertipe integer dan x juga adalah integer. p hanya dapat menampung alamat dari variable bertipe integer bukan nilainya.

d.	*p = *q;
invalid--> invalid karena Pointer p harus digunakan hanya dengan nama variabel p, Tanpa tanda bintang. 
           *q valid 

e. q = &x;
valid--> valid karena q merupakan variable pointer dan dapat menunjuk ke alamat x ('&x');

f. *p = q;
invalid--> invalid karena menggunakan *p

ctt:
Tipe data pointer harus di set dengan tipe data yang sama dengan tipe data asal. Maksudnya jika ingin menyimpan alamat memory dari sebuah variabel bertipe int, maka tipe data pointernya juga harus int: