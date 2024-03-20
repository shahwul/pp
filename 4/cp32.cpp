#include <iostream>
#include <cstring>
using namespace std;

struct Movies
{
    char judul[40];
    int rilis;
    char director[40];
    char genre[20];
    float rating;
};

int main()
{
    Movies mv[2];

    for (int i = 0; i < 3; i++)
    {
        cout << "Judul: ";
        cin.get(mv[i].judul, 40);
        cout << "Rilis: ";
        cin >> mv[i].rilis;
        cin.ignore();
        cout << "Director: ";
        cin.get(mv[i].director, 40);
        cin.ignore();
        cout << "Genre: ";
        cin.get(mv[i].genre, 20);
        cout << "Rating: ";
        cin >> mv[i].rating;
        cin.ignore();
    }

    // strcpy(mv[0].judul, "Dune: Part Two");
    // mv[0].rilis = 2024;
    // strcpy(mv[0].director, "Denis Villeneuve");
    // strcpy(mv[0].genre, "Action");
    // mv[0].rating = 8.9;

    // strcpy(mv[1].judul, "Oppenheimer");
    // mv[1].rilis = 2023;
    // strcpy(mv[1].director, "Christopher Nolan");
    // strcpy(mv[1].genre, "Biography");
    // mv[1].rating = 8.4;

    // strcpy(mv[2].judul, "Interstellar");
    // mv[2].rilis = 2014;
    // strcpy(mv[2].director, "Christopher Nolan");
    // strcpy(mv[2].genre, "Adventure");
    // mv[2].rating = 8.7;

    cout << "Data Jenis Film: \n";
    for (int i = 0; i < 3; i++)
    {
        cout << "Film ke-" << i + 1 << ":\n";
        cout << "Judul: " << mv[i].judul << endl;
        cout << "Rilis: " << mv[i].rilis << endl;
        cout << "Director: " << mv[i].director << endl;
        cout << "Genre: " << mv[i].genre << endl;
        cout << "Rating: " << mv[i].rating << endl
             << endl;
    }

    return 0;
}
