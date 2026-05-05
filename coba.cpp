#include <iostream>
#include <string>

using namespace std;

class Kendaraan {
private:
    int id;
    string nama;

public:
    // 1. Constructor tanpa parameter (Default)
    Kendaraan() {
        id = 0;
        nama = "Belum Terdaftar";
    }

    // 2. Constructor dengan parameter ID saja
    Kendaraan(int idInput) {
        id = idInput;
        nama = "Anonim";
    }

    // 3. Constructor dengan parameter Nama saja
    Kendaraan(string namaInput) {
        id = 0;
        nama = namaInput;
    }

    // 4. Constructor dengan parameter Lengkap
    Kendaraan(int idInput, string namaInput) {
        id = idInput;
        nama = namaInput;
    }

    // Metode untuk menampilkan informasi
    void tampilkanInfo() {
        cout << "ID Kendaraan   : " << id << endl;
        cout << "Nama Kendaraan : " << nama << endl;
        cout << "----------------------------" << endl;
    }
};

int main() {
    cout << "=== Data Inventaris Kendaraan ===" << endl << endl;

    // Membuat objek dengan 4 cara berbeda
    Kendaraan mobil1;                         // Menggunakan Default
    Kendaraan mobil2(101);                    // Menggunakan ID saja
    Kendaraan mobil3("Sepeda Motor");         // Menggunakan Nama saja
    Kendaraan mobil4(202, "Bus Trans");       // Menggunakan Lengkap

    // Menampilkan hasil
    cout << "Objek 1 (Tanpa Parameter):" << endl;
    mobil1.tampilkanInfo();

    cout << "Objek 2 (Hanya ID):" << endl;
    mobil2.tampilkanInfo();

    cout << "Objek 3 (Hanya Nama):" << endl;
    mobil3.tampilkanInfo();

    cout << "Objek 4 (Lengkap):" << endl;
    mobil4.tampilkanInfo();

    return 0;
}