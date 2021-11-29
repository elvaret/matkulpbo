package fungsi.nonreturningvalue;

public class main1 {
  public static void perkenalan(){
    System.out.println("Hello nama saya Elvaret");
  }
  public static void main(String[] args) {
    perkenalan();
  }
}

/* Penjelasan:
a. Public adalah kode akses yang bersifat umum. dengan kata lain, data maupun method dalam 
   suatu kodingan tersebut dapat diakses oleh semua bagian di dalam program.
b. Keyword “static” digunakan apabila kita ingin mendefinisikan fungsi yang dapat langsung 
   dipanggil secara publik tanpa perlu menginstansiasi objek.
c. Fungsi void adalah fungsi yang tidak mengembalikan nilai keluaran ( return output ) yang 
   didapat dari hasil proses tersebut.
d. perkenalan() adalah nama fungsinya. Biasanya ditulis dengan huruf kecil di awalnya. Lalu, 
   kalau terdapat lebih dari satu suku kata, huruf awal di kata kedua ditulis kapital.
*/