#include <iostream>
#include <string>
using namespace std;

class Book{
    public:
        bool checkedOut;
        string title;
    public:
        string availibility(){
            if (checkedOut == true){
                return "Checked Out";
            }
            else{
                return "Availble";
            }
        }
        bool checkOut(){
            if (checkedOut){
                return false;
            }
            this->checkedOut = true;
            return true;
        }
        bool returnBook(){
            if (!checkedOut){
                return false;
            }
            this->checkedOut = false;
            return true;
        }
        string getTitle(){
            return this->title;
        }
        void setTitle(){
            cout<<"enter new title: ";
            cin>>this->title;
        }
        Book(string title){
            checkedOut = false;
            this->title = title;
        }
        Book(){
            checkedOut = false;
            cout<<"set title: ";
            cin>>this->title;
        }
};

class Library {
    private:
        Book *books = new Book[numBooks];
        int numBooks = 0;
    public:
        int getAmountBooks(){
            return numBooks;
        }
        void addBook(){
            numBooks++;
            Book newBook = Book();
            books[numBooks] = newBook;
        }
        Book getBook(int book){
            return books[book];
        }
        ~Library(){
            delete[] books; 
        }
};


int main(){
    Book book = Book();
    cout<<book.checkOut()<<endl;
    cout<<book.availibility()<<endl;
    cout<<book.returnBook()<<endl;
    cout<<book.availibility()<<endl;
    Library lib = Library();
    lib.addBook();
    lib.addBook();
    lib.addBook();
    cout<<lib.getBook(1).checkOut()<<endl;
    cout<<lib.getBook(1).availibility()<<endl;
    cout<<lib.getBook(1).returnBook()<<endl;
    cout<<lib.getBook(1).availibility()<<endl;
}