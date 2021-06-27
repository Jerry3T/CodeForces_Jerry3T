#include<iostream>

using namespace std;

int main() {

    int l;
    int w;
    int total;

    cin >> l >> w;

    if (w % 2 == 0) {

        total = (l * w) / 2;

    } else {

        int tmp = w - 1;

        total = (l * tmp) / 2;

        total += l / 2;

    }

    cout << total;

    return 0;

}