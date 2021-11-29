package fungsi.returningvalue;

public class main 
{
  public static int luas(int panjang, int lebar)
  {
    return panjang * lebar;
  }
  public static void main(String[] args){
    System.out.println(luas(12,15));
  }
}

/* Penjelasan:
a. Public adalah kode akses yang bersifat umum. dengan kata lain, data maupun method dalam 
   suatu kodingan tersebut dapat diakses oleh semua bagian di dalam program.
b. Keyword “static” digunakan apabila kita ingin mendefinisikan fungsi yang dapat langsung 
   dipanggil secara publik tanpa perlu menginstansiasi objek.
c. luas() adalah nama fungsinya. Biasanya ditulis dengan huruf kecil di awalnya. Lalu, kalau 
   terdapat lebih dari satu suku kata, huruf awal di kata kedua ditulis kapital.
d. Fungsi area menerima dua buah parameter yaitu panjang dan lebar yang masing-masing memiliki 
   tipe data int. Pada contoh berikut, tipe fungsi adalah int, yang menunjukkan bahwa nilai 
   kembalian dari fungsi (yaitu hasil perhitungan luas) bertipe int. Pemanggilan fungsi dapat 
   dituliskan sebagai bagian dari sebuah ekspresi, dimana hasil perhitungan luas
   akan dikembalikan ke pemanggilnya. Pada akhir program, maka variabel Luas akan bernilai 180.
*/


