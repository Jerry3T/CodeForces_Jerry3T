#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

int main() {

	string init;

	cin >> init;

	transform(init.begin(), init.end(), init.begin(), ::tolower);

	for (int i = 0; i < init.length(); i++) {

		char low = init.at(i);

		if (low == 'o' or low == 'a' or low == 'y' or low == 'e' or low == 'u' or low == 'i') {

			init.erase(init.begin() + i);
			i -= 1;

		} else if (i == 0) {

			init.insert(0, 1, '.');
			i += 1;

		} else {

			init.insert(i, 1, '.');
			i += 1;

		}

	}
	
	cout << init;

	return 0;

}
