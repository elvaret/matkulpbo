//Parameter Fungsi Bertipe Array
#include<iostream>

using namespace std;

//mendeklarasikan fungsi untuk proses input array
void input_array(int X[],int jumlah){
    for(int a=0;a<jumlah;a++){
        cout<<"Masukkan nilai X["<<a<<"] : ";
        cin>>X[a];
    }
}

//mendeklarasikan fungsi untuk proses penjumlahan array (sum) 
int sum_array(int X[],int jumlah){
    int hasil=0;
    //menjumlahkan semua elemen array
    for(int a=0;a<jumlah;a++){
        hasil+=X[a];
    }
    return hasil;
}
//fungsi utama 
int main(){
    int X[100]; //elemen maksimal adalah 100
    int jumlah;
    int hasil;
    cout<<"Masukkan banyaknya elemen X yang diinginkan: ";
    cin>>jumlah;
    cout<<endl;

    //memanggil fungsi input_array 
    input_array(X,jumlah);
    cout<<endl;

    //memanggil fungsi sum_array
    //dan menampung hasilnya ke variabel hasil 
    hasil=sum_array(X,jumlah);

    //menampilkan hasil
    cout<<"Hasil penjumlahan semua elemen X yaitu : "<<hasil;
    cout<<endl;
    return 0;
}