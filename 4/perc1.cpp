#include <iostream>
using namespace std;

struct pegawai
{
    char nama[20];
    int id;
    float gaji;
    char alamat[40];
    int umur;
};

int main()
{
    pegawai pgw;
    cout << "Masukkan Nama : ";
    cin.get(pgw.nama, 20);
    cout << "Masukkan id Pegawai : ";
    cin >> pgw.id;
    cout << "Masukkan gaji : ";
    cin >> pgw.gaji;
    cout << "Masukkan alamat: ";
    cin.ignore();
    cin.get(pgw.alamat, 40);
    cout << "Masukkan umur: ";
    cin >> pgw.umur;
    cout << "\nTampilkan Information Pegawai" << endl;
    cout << "Nama: " << pgw.nama << endl;
    cout << "ID: " << pgw.id << endl;
    cout << "Gaji: " << pgw.gaji << endl;
    cout << "Alamat: " << pgw.alamat << endl;
    cout << "Umur: " << pgw.umur << endl;
    return 0;
}