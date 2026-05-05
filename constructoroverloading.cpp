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

mahasiswa :: mahasiswa(int iNim, string iNama){
    nim = iNim; // definisi NIM dan NAMA
    nama = iNama;
}
void mahasiswa :: cetak(){
    cout << endl << "NIM : " << nim << endl;
    cout << "Nama= : " << nama << endl;
}
int main(){
    mahasiswa mhs1(102030);
    mahasiswa mhs2("faid");
    mahasiswa mhs3(010203, "yuratama");

    cout << "Mahasiswa 1:" ; mhs1.cetak();

    cout << " Mahasiswa 2:" ; mhs2.cetak();

    cout << "Mahasiswa 3:" ; mhs3.cetak();

    return 0;
}