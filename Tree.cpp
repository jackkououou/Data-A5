#include "Tree.h"
#include <iostream>
using namespace std;

Date::Date()
{
	this->month = this->day = this->year = NULL;		
}

Date::Date(const Date& obj)
{
	this->month = obj.month;
	this->day = obj.day;
	this->year = obj.year;
}

Date::~Date()
{
	delete this;
}

void Date::set(int in_month, int in_day, int in_year)
{
	this->month = in_month;
	this->day = in_day;
	this->year = in_year;
}

bool Date::operator<(const Date& right)
{
	bool test = false;
	if (this->year < right.year)
	{
		if (this->month < right.year)
		{
			if (this->day < right.day)
				test = true;
		}
	}
	return test;
}

bool Date::operator>(const Date& right)
{
	bool test = false;
	if (this->year > right.year)
	{
		if (this->month > right.year)
		{
			if (this->day > right.day)
				test = true;
		}
	}
	return test;
}

bool Date::operator==(const Date& right)
{
	bool test = false;
	if (this->year == right.year)
	{
		if (this->month == right.year)
		{
			if (this->day == right.day)
				test = true;
		}
	}
	return test;
}

ostream& operator<<(ostream& out, const Date& d)
{
	out << d.month << '/' << d.day << '/' << d.year;
	return out;
}

istream& operator>>(istream& in, Date& d)
{
	in >> d.month;
	in.ignore();
	in >> d.day;
	in.ignore();
	in >> d.year;
	return in;
}

Tree::Tree()
{
	root = nullptr;
}

Tree::Tree(const Tree& obj)
{
	this->root = obj.root;
}

Tree::~Tree()
{
	delete this->root;
}

void Tree::printPostorder(Nodeptr root)
{
	//checks if tree is empty
	if (root == nullptr)
		return;
	//gets that left node
	printPostorder(root->left);
	//then that right node
	printPostorder(root->right);
	//finally the root node;
	cout << root->date << " ";
}

void Tree::printInorder(Nodeptr root)
{
	if (root == nullptr)
		return;

	printInorder(root->left);

	cout << root->date << " ";

	printInorder(root->right);
}

void Tree::binarySortinput(Nodeptr node, Date input)
{
	if (node == nullptr)
	{
		this->root = new Node(input);
		return;
	}

	else if (root->date > input)
		binarySortinput(node->left, input);

	else if (root->date < input)
		binarySortinput(node->right, input);

	else if (root->date == input)
		binarySortinput(node->right, input);

}

void Tree::removeNode(Date obj)
{
	if (root == nullptr)
	{
		cout << "Nothing in this tree... yet!" << endl;
		return;
	}

}
