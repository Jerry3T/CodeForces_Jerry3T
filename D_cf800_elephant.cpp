#include<iostream>

using namespace std;

int main() {

    int coordinate = 0;
    int steps = 0;

    cin >> coordinate;

    if (coordinate / 5 >= 1.0) {

        int count = coordinate / 5;

        steps+=count;

        coordinate -= (count * 5);

    }

    if (coordinate / 4 >= 1.0) {

        int count = coordinate / 4;

        steps+=count;

        coordinate -= (count * 4);

    }

    if (coordinate / 3 >= 1.0) {

        int count = coordinate / 3;

        steps+=count;

        coordinate -= (count * 3);

    }

    if (coordinate / 2 >= 1.0) {

        int count = coordinate / 2;

        steps+=count;

        coordinate -= (count * 2);

    }

    if (coordinate == 1) {

        steps+=1;

    }

    cout << steps;

    return 0;

}