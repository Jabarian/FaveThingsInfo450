#include "BookList.h"

BookList::BookList()
{
	size = 0;
}

int BookList::getSize() const
{
	return size;
}

bool BookList::isDuplicate(int isbn)
{
	for (int i = 0; i < getSize(); i++)
	{
		if (books[i].getISBN() == isbn)
			return true;
	}
	return false;
}

void BookList::addBook()
{
	// variables
	int isbn, year;
	string title, author, publisher;
	double price;

	cout << "Please input data for your favorite book" << endl;
// label to continue input
input:
	// get user input
	cout << "Enter Book ISBN: ";
	cin >> isbn;
	
	// check if book already exists
	if (isDuplicate(isbn))
	{
		// input again
		cout << "List has already a book with same ISBN, Please try again. " << endl;
		goto input;
	}

	// clear input buffer
	cin.ignore();
	cout << "Enter Book Title: ";
	getline(cin, title);
	cout << "Enter Book Author: ";
	getline(cin, author);
	cout << "Enter Book Publisher: ";
	getline(cin, publisher);
	cout << "Enter Book Published Year: ";
	cin >> year;
	cout << "Enter Book Price: ";
	cin >> price;

	// Make a Book class object
	Book book(isbn, title, author, publisher, year, price);

	// add book to book list
	books[size] = book;

	// increase size by 1
	size++;
}

Book BookList::getBookAtIndex(int i) const
{
	if (i >= 0 && i < size)
		return books[i];
	else
		return Book();	// empty book object
}

// for list output
ostream& operator<<(ostream& os, const BookList& obj)
{
	if (obj.getSize() == 0)
	{
		os << "Book list is empty" << endl;
	}
	else
	{
		os << "Book list has following books:" << endl << endl;
	}

	for (int i = 0; i < obj.getSize(); i++)
	{
		Book book = obj.getBookAtIndex(i);

		// display book data
		os << "ISBN: " << book.getISBN() << endl;
		os << "Title: " << book.getTitle() << endl;
		os << "Author: " << book.getAuthor() << endl;
		os << "Publisher: " << book.getPublisher() << endl;
		os << "Year: " << book.getYear() << endl;
		os << "Price: " << book.getPrice() << endl;
		os << endl;
	}
	return os;
}