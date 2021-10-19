#include<iostream>

using namespace std;

int main() {

    int limak;
    int bob;
    int count = 0;

    cin >> limak >> bob;

    while (bob >= limak) {

        count += 1;

        bob *= 2;
        limak *= 3;

    }

    cout << count;

    return 0;

}