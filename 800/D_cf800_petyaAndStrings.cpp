#include<iostream>
#include<string>

using namespace std;

int main() {

	string one;

	string two;

	cin >> one >> two;

	for (int i = 0; i < one.length(); i++) {
		one[i] = ::tolower(one[i]);
	}

	for (int i = 0; i < two.length(); i++) {
		two[i] = ::tolower(two[i]);
	}

	if (one  > two) {

		cout << 1;

	} else if (one < two) {

		cout << -1;

	} else if (one == two) {

		cout << 0;

	}

	return 0;

}
