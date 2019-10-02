#include <iostream>

using namespace std;

class Node
{

public:
	int data;

	Node *next;
};

void display(Node *head)
{

	std::cout <<endl<< "printing the data: " << std::endl;

	while (head != NULL)
	{

		std::cout << head->data << std::endl;

		head = head->next;
	}
}

void addAtEnd(Node **head)
{

	Node *New;
    int d;
	New = new (Node);

	Node *last = *head;

	std::cout << std::endl<< "Enter the data of new Node: ";

	std::cin >> d;

    while (last->next != NULL)
        last = last->next;
    New->data = d;
	last->next = New;
	New->next = NULL;
	cout<<"Successfully added!"<<endl<<endl;
}

int main()
{

	Node *first;
	first = new (Node);

	std::cout << "Enter the data of first node: ";
	std::cin >> first->data;

	int c;

	while (c != 3)
	{

		std::cout << endl<<"What do you want to do?\n1.Add at the end\n2.Display all elements\n3.Exit\n \nEnter: ";
		std::cin >> c;

		switch (c)
		{

		case 1:

			addAtEnd(&first);

			break;

		case 2:

			display(first);

			break;

		default:

			break;
		}
	}

	return 0;
}
