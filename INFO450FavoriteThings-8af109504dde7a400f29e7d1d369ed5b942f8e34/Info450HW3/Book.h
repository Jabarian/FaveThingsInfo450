#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
	int isbn;
	string title;
	string author;
	string publisher;
	int year;
	double price;

public:
	Book();
	Book(int, string, string, string, int, double);
	void setISBN(int);
	void setTitle(string);
	void setAuthor(string);
	void setPublisher(string);
	void setYear(int);
	void setPrice(double);
	int getISBN();
	string getTitle();
	string getAuthor();
	string getPublisher();
	int getYear();
	double getPrice();
};

#endif // !BOOK_H
