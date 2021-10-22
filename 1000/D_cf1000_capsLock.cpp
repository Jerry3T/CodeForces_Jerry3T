#include<iostream>

using namespace std;

int main() {

    string sin, temp;
    cin >> sin;
    temp = sin;
    bool first = false;
    int length = sin.size();
    int stopTheCap = 0;

    for (int i = 0; i < length; i++) {

        if (i == 0 && islower(sin[i])) {

            first = true;
            temp[i] = toupper(temp[i]);

        }

        if (isupper(sin[i])) {

            stopTheCap+=1;
            temp[i] = tolower(temp[i]);

        }

    }

    if ((stopTheCap == length-1 && first == true) || stopTheCap == length) {

        cout << temp;

    } else cout << sin;

}