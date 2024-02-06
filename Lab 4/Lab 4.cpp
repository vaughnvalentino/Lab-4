#include <iostream>

using namespace std;

void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
void factorial() {
	int number;
	int answer = 1;

	cout << "Factorial:" << endl;
	cout << "Enter a number: ";
	cin >> number;
	while (number <= 0)
	{
		cout << "Nice try, please enter a POSITIVE number...: ";
		cin >> number;
	}

	if (number > 0)
	{
		cout << number << "! = ";

		for (int i = 1; i <= number; i++)
		{
			if (i != number)
			{
				cout << i << " * ";
			}

			else
			{
				cout << number << " = ";
			}

			answer = answer * i;
		}
		cout << answer << endl;
	}
}

void arithmetic() {
	int start;
	int add;
	int elements;
	int answer = 0;

	cout << "Arithmetic Series: " << endl;

	cout << "Enter a number to start at: ";
	cin >> start;

	cout << "Enter a number to add each time: ";
	cin >> add;

	cout << "Enter the number of elements in the series: ";
	cin >> elements;

	while (elements <= 0)
	{
		cout << "Nice try, please enter a POSITIVE number...: ";
		cin >> elements;
	}

	while (elements > 1)
	{
		answer += start;
		elements -= 1;
		cout << start;
		cout << " + ";
		start += add;
	}
	answer += start;
	elements -= 1;
	cout << start;
	start += add;

	if (elements == 0);
	{
		cout << " = " << answer << endl;
	}
}

void geometric() {
	int start;
	int mult;
	int elements;
	int answer = 0;

	cout << "Geometric Series: " << endl;

	cout << "Enter a number to start at: ";
	cin >> start;

	cout << "Enter a number to multiply by each time: ";
	cin >> mult;

	cout << "Enter the number of elements in the series: ";
	cin >> elements;

	while (elements <= 0)
	{
		cout << "Nice try, please enter a POSITIVE number...: ";
		cin >> elements;
	}

	while (elements > 1)
	{
		answer += start;
		elements -= 1;
		cout << start;
		cout << " + ";
		start *= mult;
	}
	answer += start;
	elements -= 1;
	cout << start;
	start *= mult;

	if (elements == 0);
	{
		cout << " = " << answer << endl;
	}
}
int main() {
	int choice;
	char again;

	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}

		cout << "Go Again? [Y/N] ";
		cin >> again;

	} while (again == 'y' || again == 'Y');
}