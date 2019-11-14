#ifndef BOOKLIST_H
#define BOOKLIST_H

#include "Book.h"
#define MAX_SIZE 100

class BookList
{
private:
	Book books[MAX_SIZE];
	int size;
	bool isDuplicate(int);

public:
	BookList();
	int getSize() const;
	void addBook();
	Book getBookAtIndex(int) const;

friend ostream& operator<<(ostream& os, const BookList& b);
};


#endif // !BOOKLIST_H

