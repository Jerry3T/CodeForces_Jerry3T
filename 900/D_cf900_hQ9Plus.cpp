#include<iostream>

using namespace std;

//how is this a 900 problem wut

int main() {

    string hq9;

    cin >> hq9;

    for (char s : hq9) {

        if (s == 'H' or s == 'Q' or s == '9') {

            cout << "YES";
            return 0;

        }

    }

    cout << "NO";

    return 0;

}