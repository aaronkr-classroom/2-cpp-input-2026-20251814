#include <iostream>
using namespace std;

int main() {
	int i, j;

	// 1. 정사각형 (5×5)
	cout << "Square:" << endl;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			cout << "* ";

			cout << endl;

		}

	}

	cout << endl;

	// 2. 직사각형 (4×6)
	cout << "Rectangle:" << endl;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 6; j++) {
			cout << "* ";

			cout << endl;

		}

	}

	cout << endl;

	// 3. 삼각형
	cout << "Triangle:" << endl;
	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= i; j++) {
			cout << "* ";

			cout << endl;

		}

	}

	return 0;

}