#include <iostream>
using namespace std;

union Mahasiswa
{
    char nama[40];
    int angkatan;
};

int main()
{
    Mahasiswa mhs;
    cout << "Masukkan Nama Mahasiswa :";
    cin.get(mhs.nama, 40);
    cout << "Masukkan Angkatan :";
    cin >> mhs.angkatan;
    cout << "Nama :" << mhs.nama << endl;
    cout << "Data Mahasiswa" << endl;
    cout << "Angkatan :" << mhs.angkatan << endl;
    cout << "Alokasi memori untuk elemen nama : " << &mhs.nama << endl;
    cout << "Alokasi memori untuk elemen angkatan : " << &mhs.angkatan << endl;
    cout << "Ukuran dari variabel union : " << sizeof(mhs) << endl;
    return 0;
}