#include <iostream>
using namespace std;

typedef int Integer;
typedef struct mahasiswa
{
    char nama[40];
    Integer angkatan;
} mhs;

int main()
{
    mhs aku;
    cout << "Masukkan Nama Mahasiswa :";
    cin.get(aku.nama, 40);
    cout << "Masukkan Angkatan :";
    cin >> aku.angkatan;
    cout << "Data Mahasiswa" << endl;
    cout << "Nama :" << aku.nama << endl;
    cout << "Angkatan :" << aku.angkatan << endl;
    return 0;
}