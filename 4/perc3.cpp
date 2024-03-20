#include <iostream>
#include <cstring>

using namespace std;

struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
    char rating[4];
    int copy;
};

int main()
{
    struct Books Book1;
    struct Books Book2;
    // Declare Book1 of type Book
    // Declare Book2 of type Book
    // book 1 specification
    strcpy(Book1.title, "Learn C++ Programming");
    strcpy(Book1.author, "Chand Miyan");
    strcpy(Book1.subject, "C++ Programming");
    strcpy(Book1.rating, "4/5");
    Book1.copy = 400000;
    Book1.book_id = 6495407;
    // book 2 specification
    strcpy(Book2.title, "Telecom Billing");
    strcpy(Book2.author, "Yakit Singha");
    strcpy(Book2.subject, "Telecom");
    strcpy(Book1.rating, "4/5");
    Book1.copy = 670000;
    Book2.book_id = 6495700;
    // Print Book1 info
    cout << "Book 1 title : " << Book1.title << endl;
    cout << "Book 1 author : " << Book1.author << endl;
    cout << "Book 1 subject : " << Book1.subject << endl;
    cout << "Book 1 id : " << Book1.book_id << endl;
    cout << "Book 1 rating: " << Book1.rating << endl;
    cout << "Book 1 copy: " << Book1.copy << endl;
    // Print Book2 info
    cout << "Book 2 title : " << Book2.title << endl;
    cout << "Book 2 author : " << Book2.author << endl;
    cout << "Book 2 subject : " << Book2.subject << endl;
    cout << "Book 2 id : " << Book2.book_id << endl;
    cout << "Book 2 rating: " << Book2.rating << endl;
    cout << "Book 2 copy: " << Book2.copy << endl;
    return 0;
}