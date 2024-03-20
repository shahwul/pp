#include <iostream>
#include <string>
using namespace std;

// Struktur untuk buku jenis pertama
struct Novel
{
    string title;
    string author;
    int year_published;
    float price;
};

// Struktur untuk buku jenis kedua
struct Textbook
{
    string title;
    string subject;
    int edition;
    float price;
};

// Struktur untuk buku jenis ketiga
struct Cookbook
{
    string title;
    string cuisine;
    int num_recipes;
    float price;
};

// Struktur untuk buku jenis keempat
struct Biography
{
    string title;
    string subject;
    string subject_person;
    int num_pages;
};

// Struktur untuk buku jenis kelima
struct SelfHelp
{
    string title;
    string topic;
    string author;
    float price;
};

int main()
{
    // Inisialisasi data untuk setiap buku
    Novel novel = {"To Kill a Mockingbird", "Harper Lee", 1960, 12.99};
    Textbook textbook = {"Introduction to Algorithms", "Computer Science", 4, 89.99};
    Cookbook cookbook = {"Mastering the Art of French Cooking", "French Cuisine", 524, 29.99};
    Biography biography = {"Steve Jobs", "Business", "Steve Jobs", 656};
    SelfHelp self_help = {"The Power of Habit", "Self-Improvement", "Charles Duhigg", 15.50};

    // Menampilkan data untuk setiap buku
    cout << "Novel:" << endl;
    cout << "Title: " << novel.title << endl;
    cout << "Author: " << novel.author << endl;
    cout << "Year Published: " << novel.year_published << endl;
    cout << "Price: $" << novel.price << endl
         << endl;

    cout << "Textbook:" << endl;
    cout << "Title: " << textbook.title << endl;
    cout << "Subject: " << textbook.subject << endl;
    cout << "Edition: " << textbook.edition << endl;
    cout << "Price: $" << textbook.price << endl
         << endl;

    cout << "Cookbook:" << endl;
    cout << "Title: " << cookbook.title << endl;
    cout << "Cuisine: " << cookbook.cuisine << endl;
    cout << "Number of Recipes: " << cookbook.num_recipes << endl;
    cout << "Price: $" << cookbook.price << endl
         << endl;

    cout << "Biography:" << endl;
    cout << "Title: " << biography.title << endl;
    cout << "Subject: " << biography.subject << endl;
    cout << "Subject Person: " << biography.subject_person << endl;
    cout << "Number of Pages: " << biography.num_pages << endl
         << endl;

    cout << "Self-Help:" << endl;
    cout << "Title: " << self_help.title << endl;
    cout << "Topic: " << self_help.topic << endl;
    cout << "Author: " << self_help.author << endl;
    cout << "Price: $" << self_help.price << endl
         << endl;

    return 0;
}
