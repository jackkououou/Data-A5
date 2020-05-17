#pragma once
#include <iostream>
using namespace std;

class Date
{
protected:
	int month, day, year;

public:
	Date();
	Date(const Date& obj);
	~Date();
	void set(int month, int day, int year);
	bool operator < (const Date& right);
	bool operator > (const Date& right);
	bool operator == (const Date& right);
	friend ostream& operator << (ostream& out, const Date& d);
	friend istream& operator >> (istream& in, Date& d);
};


class Tree : protected Date
{
private:

	typedef struct Node
	{
		Date date;
		Node* left, * right;
		Node(Date date)
		{
			this->date = date;
			left = nullptr;
			right = nullptr;
		}
	}*Nodeptr; //Using typedef allows replacement of Node* with Nodeptr
public:
	Nodeptr root;

	Tree();
	Tree(const Tree& obj);
	~Tree();
	void printPostorder(Nodeptr root);
	void printInorder(Nodeptr root);
	void binarySortinput(Nodeptr node, Date input);
	void removeNode(Date obj);
};


