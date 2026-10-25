#include <iostream>
using namespace std;

int main() {
	int month, day, year;

	cout << "Enter a month: ";
	cin >> month;
	cout << "Enter a day: ";
	cin >> day;
	cout << "Enter a two-digit year: ";
	cin >> year;

	//Days in each month. February can have up to 29 days in a leap year.
	int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if (month < 1 || month > 12) {
		cout << "Invalid month entered. Enter value from 1 to 12" << endl;
		return 1;
	}
	if (day < 1 || day > daysInMonth[month]) {
		cout << "Invalid day entered for the given month." << endl;
		return 1;
	}
	if (year < 0 || year > 99) {
		cout << "Invalid year entered. Enter a two-digit year from 0 to 99." << endl;
		return 1;
	}
	if (month * day == year) {
		cout << "The date " << month << "/" << day << "/" << year << " is magic!" << endl;
	}
	else {
		cout << "The date " << month << "/" << day << "/" << year << " is not magic." << endl;
	}

	return 0;
}