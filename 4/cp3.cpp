#include <iostream>
#include <cstring>
#include <string>
using namespace std;

union Movies
{
    char judul[40];
    int rilis;
    char director[40];
    char genre[20];
    float rating;
};

int main()
{
    Movies mv1, mv2, mv3;

    cout << "Data Jenis Film: \n";
    strcpy(mv1.judul, "Dune: Part Two");
    cout << "Judul: " << mv1.judul << endl;
    mv1.rilis = 2024;
    cout << "Rilis: " << mv1.rilis << endl;
    strcpy(mv1.director, "Denis Villeneuve");
    cout << "Director: " << mv1.director << endl;
    strcpy(mv1.genre, "Action");
    cout << "Genre: " << mv1.genre << endl;
    mv1.rating = 8.9;
    cout << "Rating: " << mv1.rating << endl
         << endl;

    strcpy(mv2.judul, "Oppenheimer");
    cout << "Judul: " << mv2.judul << endl;
    mv2.rilis = 2023;
    cout << "Rilis: " << mv2.rilis << endl;
    strcpy(mv2.director, "Christopher Nolan");
    cout << "Director: " << mv2.director << endl;
    strcpy(mv2.genre, "Biography");
    cout << "Genre: " << mv2.genre << endl;
    mv2.rating = 8.4;
    cout << "Rating: " << mv2.rating << endl
         << endl;

    strcpy(mv3.judul, "Interstellar");
    cout << "Judul: " << mv3.judul << endl;
    mv3.rilis = 2014;
    cout << "Rilis: " << mv3.rilis << endl;
    strcpy(mv3.director, "Christopher Nolan");
    cout << "Director: " << mv3.director << endl;
    strcpy(mv3.genre, "Adventure");
    cout << "Genre: " << mv3.genre << endl;
    mv3.rating = 8.7;
    cout << "Rating: " << mv3.rating << endl
         << endl;

    cout << "Alokasi memori untuk elemen judul : " << &mv1.judul << endl;
    cout << "Alokasi memori untuk elemen rilis : " << &mv1.rilis << endl;
    cout << "Alokasi memori untuk elemen director : " << &mv1.director << endl;
    cout << "Alokasi memori untuk elemen genre : " << &mv1.genre << endl;
    cout << "Alokasi memori untuk elemen rating : " << &mv1.rating << endl;
    cout << "Ukuran dari variabel union : " << sizeof(mv1) << endl;

    return 0;
}
