#include <cstdlib>
#include <iostream>

using namespace std;

struct Book
{
       string colour;
       string title;
       int pages;
};

Book initializeBook(Book, string, string, int);

Book initializeBook(Book _Book, string _colour, string _title, int _pages)
{
     _Book.colour=_colour;
     _Book.title=_title;
     _Book.pages=_pages;
     return _Book;
}


int main(int argc, char *argv[])
{
    Book theBook;
    theBook=initializeBook(theBook, "Red", "Omar and the L's", 1000);
    cout<<"Colour: "<<theBook.colour<<endl;
    cout<<"Title: "<<theBook.title<<endl;
    cout<<"Pages: "<<theBook.pages<<endl;
    cout<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
