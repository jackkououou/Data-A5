#include <iostream>
#include "Tree.h"

using namespace std;

int main()
{
	Tree arbor;
	int choice;
	Date utility_day;

	do
	{
		cout << "\n1. Display all dates stored";
		cout << "\n2. Insert new node.";
		cout << "\n3. Remove node.";
		cout << "\n4. Find a node.";
		cout << "\n5. Quit";
		cin >> choice;
		switch (choice)
		{
		case 1: //Display All inorder
			
			arbor.printInorder(arbor.root);
			break;

		case 2: //Input inorder
			
			cout << "\nEnter a day to enter into the node: ";
			cin >> utility_day;
			arbor.binarySortinput(arbor.root, utility_day);
			break;

		case 3: //Search for a date in the nodes to delete and well deletes it
			
			cout << "\nEnter a date that should be removed: ";
			cin >> utility_day;

			break;

		case 4: //Search for a day then return true/false if day is found
			

			break;

		case 5: //Quit
			break;

		default:
			
			cout << "\nPlease enter a chice (1 - 5)";
		}


	} while (choice != 5 );

	return 0;
}