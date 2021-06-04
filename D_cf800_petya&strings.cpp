#include<iostream>
#include<string>
#include<bits/stdc++.h>
#include <string.h>

using namespace std;

int main() {

	string one;

	string two;

	cin >> one >> two;

	transform(one.begin(), one.end(), one.begin(), ::tolower);
	transform(two.begin(), two.end(), two.begin(), ::tolower);

	if (one  > two) {

		cout << 1;

	} else if (one < two) {

		cout << -1;

	} else if (one == two) {

		cout << 0;

	}

	return 0;

}
