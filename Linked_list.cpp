#include <iostream>

using namespace std;

class Node
{

public:
	int data;

	Node *next = NULL;
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

void addAtStart(Node** head){

	int d;
	Node* New;
	New  = new(Node);

	Node *start = *head;

	std::cout << std::endl<< "Enter the data of new Node: ";

	std::cin >> d;
	New->data = d;

	New->next = (*head);

	(*head) = New;
	cout<<"Successfully added!"<<endl<<endl;

}

int main()
{

	Node *first;
	first = new (Node);

	std::cout << "Enter the data of first node: ";
	std::cin >> first->data;

	int c;

	while (c != 4)
	{

		std::cout << endl<<"What do you want to do?\n1.Add at the end\n2.Add at begining\n3.Display all elements\n4.Exit \nEnter: ";
		std::cin >> c;

		switch (c)
		{

		case 1:

			addAtEnd(&first);
			break;

		case 2:

			addAtStart(&first);
			break;

		case 3:

			display(first);
			break;

		default:

			break;
		}
	}

	return 0;
}
