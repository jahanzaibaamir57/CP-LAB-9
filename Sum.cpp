#include<iostream>
using namespace std;

int sum(int a, int b);
float sum(float a, float b);

int main() {
	int num1, num2;
	float num3, num4;
	cout << "Enter the first integer value:";
	cin >> num1;
	cout << "Enter the second integer value:";
	cin >> num2;
	cout << "\n\nThe sum of integer values is:";
	cout << sum(num1, num2);
	cout << "\n\n\n";
	cout << "Enter the first float value:";
	cin >> num3;
	cout << "Enter the second float value:";
	cin >> num4;
	cout << "\n\nThe sum of float values is:";
	cout << sum(num3, num4);

	return 0;
} 

int sum(int a, int b) {
	return a + b;
}
 
float sum(float a, float b) {
	return a + b;
}
