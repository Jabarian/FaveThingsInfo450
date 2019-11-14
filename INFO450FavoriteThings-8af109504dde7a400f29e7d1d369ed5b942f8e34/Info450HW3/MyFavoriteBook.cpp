#include "BookList.h"

int main()
{
	// welcome message
	cout << "**** WELCOME to My Favorite Things ****" << endl;
	cout << "My Favorite Thing is 'Book', So, in this program" << endl;
	cout << "you can track Book data" << endl << endl;

	// Create BookList class's object
	BookList bookList;

	int choice = 0;
	while (choice != 3)
	{
		// display menu
		cout << "1. Add New Book To List." << endl;
		cout << "2. View All Books In List." << endl;
		cout << "3. Quit." << endl;
		cout << "Your Choice > ";
		cin >> choice;

		if (choice == 1)
		{
			// call function to add a new book
			bookList.addBook();
		}
		else if (choice == 2)
		{
			cout << bookList;
		}
		else if (choice == 3)
		{
			cout << "Thank You !!";
		}
		else
		{
			cout << "Invalid Choice!" << endl;
		}
		cout << endl;
	}

	return 0;
}