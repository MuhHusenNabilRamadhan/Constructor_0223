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

mahasiswa :: mahasiswa (int iNim, string iNama)
{
    nim = iNim;
    nama = iNama;
}

void mahasiswa :: cetak()
{
    cout << endl << "NIM = " 
         << nim << endl;
    cout << "NAMA = "
         << nama << endl;
}

int main()
{
    mahasiswa mhs1;
    mahasiswa mhs2(20);
    mahasiswa mhs3("Indra");
    mahasiswa mhs4(30, "Fauzan");

    mhs1.cetak();
    mhs2.cetak();
    mhs3.cetak();
    mhs4.cetak();

    return 0;
}
