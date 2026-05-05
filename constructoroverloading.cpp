#include <iostream>
#include <string>
using namespace std;


class mahasiswa {
    private:
    int nim;
    string nama ;
    public:
    mahasiswa(); 
    mahasiswa(int);
    mahasiswa(string);
    mahasiswa(int inim, string inama);
    void cetak();
    
};
mahasiswa :: mahasiswa(){
}

mahasiswa :: mahasiswa(int iNim){
    nim = iNim; // definisi hanya NIM
}

mahasiswa :: mahasiswa(string iNama){
    nama = iNama; // definisi hanya NAMA
}
