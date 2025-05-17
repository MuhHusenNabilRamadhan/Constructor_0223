#include <iostream>
#include <string>
using namespace std;

class Dosen;
class Staff;
class Universitas;

class Mahasiswa
{
    private:
        string nama;
        int nim;
        float nilai;
    public:
        Mahasiswa (string nama, int nim);
        friend class Dosen; // untuk akses dosen mengubah nilai

};

class Dosen
{
    private:
        string nama;
        int NIDN;
        string pangkat;
        float gaji;
    public:
        Dosen (string nama, int NIDN, string pangkat, float gaji);
        friend class Staff;
        friend class Universitas;


     void BeriNilai (Mahasiswa* m, float nilai)
    {
        m->nilai = nilai;
    }
    

};

void LihatGajiDosen()
{

}

class Staff
{
    private:
        string nama;
        int ID_staff;
        float gaji;
    public:
        Staff (string nama, int ID_staf, float gaji);
        void UbahPangkat (Dosen* d, string pangkatBaru)
        {
             d->pangkat = pangkatBaru;
        }

};
void LihatGajiStaff()
{

}

class Universitas
{
    public:
        void TampilkanGajiDosen()
        {
            cout << "Gaji Dosen = "
                << LihatGajiDosen << endl;
        }

        void TampilkanGajiStaff()
        {
        cout << "Gaji Staff = " 
             << LihatGajiStaff << endl;
        }

};

int main()
{
Mahasiswa m1 ("rezzz", "20240223");
Dosen d1 ("Joko Jatmiko", "12345", "Kaprodi", "200000" );
Staff s1 ("Agus Prayitno", "5067", "10000");
Universitas univ;

d1.BeriNilai(&m1, 65); // dosen bisa mengubah nilai mahasiswa
s1.UbahPangkat(&d1, "Dekanat"); //staff bisa mengubah pangkat dosen



return 0;


}
