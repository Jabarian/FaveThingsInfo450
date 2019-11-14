#include "Book.h"

Book::Book()
{
	// inititalize variables to default values
	isbn = 0;
	title = "";
	author = "";
	publisher = "";
	int year = 0;
	double price = 0.0;
}

Book::Book(int isbn, string title, string author, string publisher, int year, double price)
{
	setISBN(isbn);
	setTitle(title);
	setAuthor(author);
	setPublisher(publisher);
	setYear(year);
	setPrice(price);
}

void Book::setISBN(int _isbn)
{
	isbn = _isbn;
}

void Book::setTitle(string _title)
{
	title = _title;
}

void Book::setAuthor(string _author)
{
	 author = _author;
}

void Book::setPublisher(string pub)
{
	publisher = pub;
}

void Book::setYear(int _year)
{
	year = _year;
}

void Book::setPrice(double _price)
{
	price = _price;
}

int Book::getISBN()
{
	return isbn;
}

string Book::getTitle()
{
	return title;
}

string Book::getAuthor()
{
	return author;
}

string Book::getPublisher()
{
	return publisher;
}

int Book::getYear()
{
	return year;
}

double Book::getPrice()
{
	return price;
}
