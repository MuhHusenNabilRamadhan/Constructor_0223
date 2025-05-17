#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
    private:
        int nim;
        string nama;
    public:
        mahasiswa();
        mahasiswa(int);
        mahasiswa(string);
        mahasiswa(int iNim, string iNama);
        void cetak();
};

mahasiswa :: mahasiswa () // mahasiswa membutuhkan nama dan nim
{
    nim = 0;
    nama = "";
}

mahasiswa :: mahasiswa (int iNim) // mengisi nim
{
    nim = iNim;
}

mahasiswa :: mahasiswa (string iNama) // mengisi nama
{
    nama = iNama;
}