#include<iostream>

using namespace std;

int main() {

    int row;
    int totalCol1 = 0;
    int totalCol2 = 0;
    int totalCol3 = 0;

    cin >> row;

    int forces[row][3];
    int num[row*3];

    for (int i = 0; i < row; i++) {

        cin.ignore(99999, '\n');

        int one;
        int two; 
        int three;

        scanf("%d %d %d", &one, &two, &three);

        for (int z = 0; z < 3; i++) {
            if(z == 0) forces[i][z] = one;
            if(z == 1) forces[i][z] = two;
            if(z == 2) forces[i][z] = three;
        }

    }

    int rows = sizeof forces / sizeof forces[0];

    for (int c = 0; c < rows; c++) {
        totalCol1 += forces[rows][0];
        totalCol2 += forces[rows][1];
        totalCol3 += forces[rows][2];
    }

    if(totalCol1 == 0 && totalCol2 == 0 && totalCol3 == 0) {
        cout << "YES";
    } else cout << "NO";

    return 0;

}