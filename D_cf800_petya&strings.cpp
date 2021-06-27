#include<iostream>
#include<string>
#include<string.h>
#include <algorithm>

using namespace std;

int main() {

	string one;

	string two;

	cin >> one >> two;

	for_each(one.begin(), one.end(), [](char & c){
    	c = tolower(c);
	});

	for_each(two.begin(), two.end(), [](char & c){
    	c = tolower(c);
	});

	if (one  > two) {

		cout << 1;

	} else if (one < two) {

		cout << -1;

	} else if (one == two) {

		cout << 0;

	}

	return 0;

}
