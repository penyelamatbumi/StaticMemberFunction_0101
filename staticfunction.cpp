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

