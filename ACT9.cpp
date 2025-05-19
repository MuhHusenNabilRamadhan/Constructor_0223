#include <iostream>
using namespace std;

 class Mahasiswa  // membuat class mahasiswa
 {
    private:
        static int totalMahasiswa; //static member variabel
    public:
        string nama;
        string status;
        int usia;

        Mahasiswa(string pNama, int pUsia) //constructor
        {
            nama = pNama;
            usia = pUsia;
            status = "Mahasiswa Baru ";
            ++totalMahasiswa; // JUMLAH TOTAL MAHASISWA  
            cout << nama << " Dibuat " << " Status " << status << endl;
            cout << endl;
        }

        ~Mahasiswa() // destructor ditandai dgn ~
        {
            cout << nama << " Dibuang " << endl;
            --totalMahasiswa;
            cout << endl;
        }

        static int getTotalMahasiswa() // static member function
        {
            return totalMahasiswa; 
        }

        static void setTotalMahasiswa(int a)
        {
            totalMahasiswa = a;
        }
 };

 int Mahasiswa::totalMahasiswa = 0; //default memulai dari 0

int main()
{
    cout << " Total Mahasiswa adalah " 
         << Mahasiswa::getTotalMahasiswa() << endl;

    Mahasiswa mhs1("Maman", 40);
    Mahasiswa mhs2("Agus", 34);

    Mahasiswa::setTotalMahasiswa(10); 

     cout << " Total Mahasiswa adalah " 
         << Mahasiswa::getTotalMahasiswa() << endl;
    {
        Mahasiswa mhs3("Budi", 19);
        Mahasiswa mhs4("Caca", 21);

         cout << " Total Mahasiswa adalah " 
         << Mahasiswa::getTotalMahasiswa() << endl; 
    }

     cout << " Total Mahasiswa adalah " 
         << Mahasiswa::getTotalMahasiswa() << endl;

        return 0;
          
}