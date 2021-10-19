#include<iostream>

using namespace std;

int main() {

    int row;
    int count = 0;

    cin >> row;

    int forces[row][3];

    for (int i = 0; i < row; i++) {

        int one;
        int two; 
        int three;

        cin >> one >> two >> three;

        forces[i][0] = one;
        forces[i][1] = two;
        forces[i][2] = three;

    }

    int cols = sizeof forces[0] / sizeof forces[0][0];

    for (int c = 0; c < cols; c++) {

        int totalCol = 0;

        for (int f = 0; f < row; f++) {

            totalCol += forces[f][c];

        }

        if (totalCol == 0) {

            count += 1;

        }
    }

    if (count == 3) {
        cout << "YES";
    } else cout << "NO";

    return 0;

}