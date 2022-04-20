#include <iostream>

using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;

};
int main()
{


    Book book1;
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 500;

    Book book2;
    book2.title = "Lord of the rings";
    book2.author = "Tolkein";
    book2.pages = 700;

    cout << "The Title of the book is: "<< book1.title << endl;
    cout << "The author of the book is: "<< book1.author << endl;
    cout << "The amount of pages in a book: "<< book1.pages << endl;

    cout << "" << endl;
    cout << "                    Next book                  " << endl;
    cout << "" << endl;

    cout << "The Title of the book is: "<< book2.title << endl;
    cout << "The author of the book is: "<< book2.author << endl;
    cout << "The amount of pages in a book: "<< book2.pages << endl;



 //   return 0;
}

