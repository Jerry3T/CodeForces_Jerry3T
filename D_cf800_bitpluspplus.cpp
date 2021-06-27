#include<iostream>
#include<string>

using namespace std;

int main() {
  
	int init;
	int num = 0;
  
	cin >> init;

	while (init > 0) {

		int count = 0;

		string temp;

		cin >> temp;

		for (int i = 0; i < temp.length(); i++) {

			char c = temp[i];

			if (c == '+') {

				count += 1;

			} else if (c == '-') {

				count -= 1;

			}

		}

		if (count == 2) {
	
			num += 1;
	
		} else if (count == -2) {
	
			num -= 1;
	
		}

		init -= 1;

	}

	cout << num;

	return 0;

}
