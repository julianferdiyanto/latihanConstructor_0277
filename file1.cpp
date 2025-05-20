// Buatlah program C++ dengan class Barang yang memiliki atribut namaBarang, kodeBarang.
// program memiliki constuctor berparameter untuk mengisi nilai namaBarang, dan kodeBarang.
// serta memiliki fungsi untuk menampilkan informasi barang.

#include <iostream>
#include <string>
using namespace std;

class Barang {
public:
    string namaBarang;
    string kodeBarang;

    // Constructor Berparameter
    Barang(string nama, string kode){}

    // Fungsi untuk menampilkan informasi barang
    void tampilkanInfoBarang() {
        cout << "Nama Barang = " << namaBarang << endl;
        cout << "Kode Barang = " << kodeBarang << endl;
    }
};

int main(){
    // Membuat objek Barang dengan constructor
    Barang barang("Laptop Lenovo Ideopad Slim 5", "LIS001");

    // Menampilkan informasi barang
    barang.tampilkanInfoBarang();

    return 0;
}