#include <iostream>
#include <string> // menyertakan library string
using namespace std;

class Mahasiswa {

private:
    static int nim;

public:
    int id;
    string nama;

    void setID();
    void printAll();

    // pembuatan static function
    static void setNim(int pnim) {
        nim = pnim;
    }

    static int getNim() {
        return nim;
    }

    Mahasiswa(string pnama) : nama(pnama) {
        setID();
    }
};

// inisialisasi static member
int Mahasiswa::nim = 0;

// pendefinisian prosedur di luar class
void Mahasiswa::setID() {
    id = ++nim;
}

void Mahasiswa::printAll() {
    cout << "ID = " << id << endl;
    cout << "Nama = " << nama << endl;
    cout << endl;
}

int main() {
    // pembuatan object dan pemberian nilai
    Mahasiswa mhs1("Sri Dadi");
    Mahasiswa mhs2("Budi Jatiko");

    // memberi nilai awal pada setNim() untuk merubah nilai NIM
    Mahasiswa::setNim(9);
    Mahasiswa mhs3("Andi Janu");
    Mahasiswa mhs4("joko wahono");

    mhs1.printAll();
    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();
    
    return 0;
}