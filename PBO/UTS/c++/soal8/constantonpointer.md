-->Apa itu Constant Pointer?
constant pointer adalah sebuah pointer yang tidak bisa mengubah alamat yang dipegangnya. Dengan kata lain, kita dapat mengatakan bahwa sekali sebuah constant pointer menunjuk ke sebuah variable, maka itu tidak bisa menunjuk kepada variable lainnya.

-->Berdasarkan contoh diatas:
a). Saya mendeklarasikan 2 variabel, yaitu a dan b dengan nilai 1 dan 2
b). Saya mendeklarasikan sebuah constant pointer
c). Pertama, saya menetapkan/mengassign alamat dari variable a ke pointer ptr
d). Kemudian, saya menetapkan alamat dari variable b ke pointer ptr
e). Terakhir, saya mencoba untuk mengeluarkan hasil dari variable yang 
    ditunjukkan oleh ptr  

-->kompilasi gagal:
a). Berdasarkan output diatas, kita dapat mengobservasikan bahwa kode 
    menghasilkan pesan error "assignment of read-only variable 'ptr'".
b). Artinya nilai variabel 'ptr' yang dipegang 'ptr' tidak dapat diubah. 
c). Berdasarkan kode diatas, kita sedang mengubah nilai dari 'ptr' dari &a ke 
    &b, yang mana tidak mungkin untuk diubah dengan constant pointers. 
d). Oleh karena itu, kita dapat mengatakan bahwa constant pointer yang menunjuk 
    ke beberapa variable tidak bisa menunjuk kepada variable lain.
