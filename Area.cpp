#include<iostream>

using namespace std;

int area(int a);
float area(float a, float b);
float area(float a);

int main() {
	int choice;
	cout << "Press 1 for area of square.\n";
	cout << "Press 2 for area of recctangle.\n";
	cout << "Press 3 for area of circle.\n";
	cout << "Enter your choice:\n";
	cin >> choice;
	switch (choice) {
	case 1:
		int length;
		cout << "Enter the length of square:";
		cin >> length;
		cout << "\nThe area of square is:";
		cout << area(length);
		break;
	case 2:
		float length1, breath;
		cout << "Enter the length of rectangle:";
		cin >> length1;
		cout << "Enter the breath of rectangle:";
		cin >> breath;
		cout << "\nThe area of rectangle is:";
		cout << area(length1, breath);
		break;
	case 3:
		float radius;
		cout << "Enter the radius of cirle:";
		cin >> radius;
		cout << "\nThe area of circle:";
		cout << area(radius);
		break;
	default:
		cout << "Invalid Input.";
	}

	return 0;
}


	int area(int a) {
	return a * a;
}

float area(float a, float b) {
	return a * b;
}

float area(float a) {
	return 3.14 * a * a;
}
