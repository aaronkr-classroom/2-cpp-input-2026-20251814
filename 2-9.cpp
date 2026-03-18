#include <iostream>
using namespace std;

int main() {
	int a, b;

	cout << "Enter two numbers: ";
	cin >> a >> b;

	if (a > b)
		cout << "Bigger number: "
		<< a << endl;
	else
		cout << "Bigger number: "
		<< b << endl;

	return 0;

}