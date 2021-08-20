#include<iostream>

using namespace std;

int main() {

    int cost;
    int balance;
    int want;
    int total = 0;

    cin >> cost >> balance >> want;

    for (int i = 1; i <= want; i++) {

        total += (i*cost);

    }

    int result = total - balance;

    if (result <= 0) {

        cout << 0;

    } else cout << result;

    return 0;

}