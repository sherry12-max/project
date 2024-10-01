#include <iostream>
#include <string>
using namespace std;
class Book{
private:
    string title;
    string author;
    string slots;
public:
    Book()
	 {}
    Book(string& title,string& author,string& slots)
         {
         	this->title=title;
         	this->author=author;
         	this->slots=slots;
		 }

    string getTitle()
	 {
        return title;
    }
    string getAuthor() 
	{ 
        return author;
    }
    string getSlots() {
        return slots;
    }
    void display()
	 {
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Slots: " <<slots<<endl;
    }
};
class Library {
private:
     static const int MAX_BOOKS=100;
    Book books[MAX_BOOKS];
    int bookCount;

public:
    Library()
	 {
	 	bookCount=0;
	 }
    void addBook(const Book& book) {
        if (bookCount<MAX_BOOKS) {
            books[bookCount]=book;
            bookCount++;
        } 
		else 
		{
            cout<<"Library is full cannot add more books"<<endl;
        }
    }
    void displaybooks()  
	{
        for (int i=0;i<bookCount;++i) {
            books[i].display();
            cout << "----------------------"<<endl;
        }
    }

    void searchbookbytitle(string& title) 
	 {
        bool found=false;
        for (int i=0; i<bookCount;++i) {
            if (books[i].getTitle()==title) {
                books[i].display();
                found=true;
                break;
            }
        }
        if (!found) {
            cout<<"Book not found"<<endl;
        }
    }
    void deletebookbytitle(const string& title) 
	{
        bool found=false;
        for (int i=0;i<bookCount;++i) {
            if (books[i].getTitle() == title) {
                for (int j=i;j<bookCount-1;++j) {
                    books[j] = books[j+1];
                }
                bookCount--;
                found=true;
                cout<<"Book deleted"<<endl;
                break;
            }
        }
        if (!found) 
		{
            cout<<"Book not found"<<endl;
        }
    }
};
int main() 
{
    Library l;
    int choice;
    string title,author,slots;

    while (true) {
        cout<< "Library Management System"<<endl;
        cout<< "1. Add Book"<<endl;
        cout<< "2. Display All Books"<<endl;
        cout<< "3. Search Book by Title"<<endl;
        cout<< "4. Delete Book by Title"<<endl;
        cout<< "5. Exit"<<endl;
        cout<< "Enter your choice: ";
        cin>>choice;
        switch (choice) {
            case 1:
                cin.ignore(); 
                cout<<"Enter title: ";
                getline(cin, title);
                cout<<"Enter author: ";
                getline(cin, author);
                cout<<"Enter Slots: ";
                getline(cin,slots);
                l.addBook(Book(title, author, slots));
                break;
            case 2:
                l.displaybooks();
                break;
            case 3:
                cin.ignore();
                cout<<"Enter title: ";
                getline(cin,title);
                l.searchbookbytitle(title);
                break;
            case 4:
                cin.ignore();
                cout<<"Enter title: ";
                getline(cin,title);
                l.deletebookbytitle(title);
                break;
            case 5:
                return 0;
            default:
                cout<<"Invalid choice Please try again"<<endl;
        }
    }
}

