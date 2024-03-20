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
} book1, book2, book3, book4, book5;

int main()
{
    strcpy(book1.title, "Learn C++ Programming");
    strcpy(book1.author, "Chand Miyan");
    strcpy(book1.subject, "C++ Programming");
    strcpy(book1.rating, "4/5");
    book1.copy = 400000;
    book1.book_id = 6495407;
    // book 2 specification
    strcpy(book2.title, "Telecom Billing");
    strcpy(book2.author, "Yakit Singha");
    strcpy(book2.subject, "Telecom");
    strcpy(book1.rating, "4/5");
    book1.copy = 670000;
    book2.book_id = 6495700;
    // Print Book1 info
    cout << "Book 1 title : " << book1.title << endl;
    cout << "Book 1 author : " << book1.author << endl;
    cout << "Book 1 subject : " << book1.subject << endl;
    cout << "Book 1 id : " << book1.book_id << endl;
    cout << "Book 1 rating: " << book1.rating << endl;
    cout << "Book 1 copy: " << book1.copy << endl;
    // Print Book2 info
    cout << "Book 2 title : " << book2.title << endl;
    cout << "Book 2 author : " << book2.author << endl;
    cout << "Book 2 subject : " << book2.subject << endl;
    cout << "Book 2 id : " << book2.book_id << endl;
    cout << "Book 2 rating: " << book2.rating << endl;
    cout << "Book 2 copy: " << book2.copy << endl;
    return 0;
}