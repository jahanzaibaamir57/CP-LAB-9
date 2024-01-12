#include<iostream>
using namespace std;

void swapper(int &a, int &b);

int main() {
	int a, b;
	cout << "Enter the value of a:";
	cin >> a;
	cout << "Enter the value of b:";
	cin >> b;
	swapper(a, b);
	cout << "\n\nThe value of a after swapping is:" << a;
	cout << "\nThe value of b after swapping is:" << b;
	return 0;
}

void swapper(int &a, int &b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}
