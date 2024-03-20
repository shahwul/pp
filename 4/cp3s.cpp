#include <iostream>
#include <cstring>
using namespace std;

// Struktur untuk film jenis pertama
struct Action
{
    char title[20];
    int duration;
    char main_actor[20];
    char director[20];
    int budget;
};

// Struktur untuk film jenis kedua
struct Comedy
{
    char title[20];
    int duration;
    int laughter_rating;
    char screenwriter[20];
    int num_jokes;
};

// Struktur untuk film jenis ketiga
struct Drama
{
    char title[20];
    int duration;
    char main_character[20];
    char theme[40];
    char director[20];
};

// Struktur untuk film jenis keempat
struct SciFi
{
    char title[20];
    int duration;
    char main_character[20];
    char setting[20];
    int tech_level;
};

// Struktur untuk film jenis kelima
struct Horror
{
    char title[20];
    int duration;
    char main_character[20];
    char antagonist[20];
    int scare_rating;
};

// Union untuk menyimpan semua jenis film
union Film
{
    Action action_film;
    Comedy comedy_film;
    Drama drama_film;
    SciFi scifi_film;
    Horror horror_film;
};

int main()
{
    // Inisialisasi union Film
    Film films1, films2, films3;

    // Mengisi data untuk film jenis pertama
    strcpy(films1.action_film.title, "The Dark Knight");
    films1.action_film.duration = 152;
    strcpy(films1.action_film.main_actor, "Christian Bale");
    strcpy(films1.action_film.director, "Christopher Nolan");
    films1.action_film.budget = 185000000;

    // Mengisi data untuk film jenis kedua
    strcpy(films2.comedy_film.title, "Superbad");
    films2.comedy_film.duration = 113;
    films2.comedy_film.laughter_rating = 8;
    strcpy(films2.comedy_film.screenwriter, "Seth Rogen");
    films2.comedy_film.num_jokes = 50;

    // Mengisi data untuk film jenis ketiga
    strcpy(films3.drama_film.title, "Forrest Gump");
    films3.drama_film.duration = 142;
    strcpy(films3.drama_film.main_character, "Tom Hanks");
    strcpy(films3.drama_film.theme, "Life is like a box of chocolates.");
    strcpy(films3.drama_film.director, "Robert Zemeckis");

    // Menampilkan data untuk setiap film
    cout << "Film 1 (Action):" << endl;
    cout << "Title: " << films1.action_film.title << endl;
    cout << "Duration: " << films1.action_film.duration << " minutes" << endl;
    cout << "Main Actor: " << films1.action_film.main_actor << endl;
    cout << "Director: " << films1.action_film.director << endl;
    cout << "Budget: $" << films1.action_film.budget << endl
         << endl;

    cout << "Film 2 (Comedy):" << endl;
    cout << "Title: " << films2.comedy_film.title << endl;
    cout << "Duration: " << films2.comedy_film.duration << " minutes" << endl;
    cout << "Laughter Rating: " << films2.comedy_film.laughter_rating << endl;
    cout << "Screenwriter: " << films2.comedy_film.screenwriter << endl;
    cout << "Number of Jokes: " << films2.comedy_film.num_jokes << endl
         << endl;

    cout << "Film 3 (Drama):" << endl;
    cout << "Title: " << films3.drama_film.title << endl;
    cout << "Duration: " << films3.drama_film.duration << " minutes" << endl;
    cout << "Main Character: " << films3.drama_film.main_character << endl;
    cout << "Theme: " << films3.drama_film.theme << endl;
    cout << "Director: " << films3.drama_film.director << endl
         << endl;

    // Menampilkan ukuran byte tiap elemen struct
    cout << "Size of Action struct: " << sizeof(Action) << " bytes" << endl;
    cout << "Size of Comedy struct: " << sizeof(Comedy) << " bytes" << endl;
    cout << "Size of Drama struct: " << sizeof(Drama) << " bytes" << endl;
    cout << "Size of Sci-Fi struct: " << sizeof(SciFi) << " bytes" << endl;
    cout << "Size of Horror struct: " << sizeof(Horror) << " bytes" << endl;

    // Menampilkan ukuran byte dari union Film
    cout << "Size of Film union: " << sizeof(Film) << " bytes" << endl;

    return 0;
}
