package parameter;
public class parameter {
  static void greetings (String greeting){
    System.out.println(greeting);
  }
  public static void main(String[] args) {
    greetings("Hi");
    greetings("Welcome");
    greetings("My name is Elvaret");
    greetings("i wanna be a programmer!");
  }

}
/* Penjelasan:
a. Parameter ditulis di antara tanda kurung ();
b. Pada contoh tersebut, saya membuat parameter bernama greeting dengan tipe String 
   (String greeting). Sehingga saya bisa menggunakan variabel greeting di dalam fungsi.
d. Parameter harus diberikan tipe data (String greeting).
e. Bila terdapat lebih dari satu parameter, maka dipisah dengan tanda koma.
*/