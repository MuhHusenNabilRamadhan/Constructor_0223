#include <iostream>
using namespace std;

class angka 
{
    private:
        int *arr;
        int panjang;
    public:
        angka(int); // constructor
        ~angka(); // destructor
        void cetakData();
        void isiData();
};

//Definisi member function
angka::angka(int i) 
{
    //construtor
    panjang = i;
    arr = new int[i];
    isiData();
}

angka::~angka()
{
    //destructor
    cout << endl;
    cetakData();
    delete[]arr;
    cout << "Alamat Array Sudah Dilepaskan" << endl;
}