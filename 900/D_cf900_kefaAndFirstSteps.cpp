#include<iostream>

using namespace std;

int main() {

    int range = 0;
    cin >> range;
    int temp = 0;
    int count = 0;
    int finalCount = 0;

    while (range != 0) {

        int num;
        cin >> num;

        if (num >= temp) {

            // cout << "\n";
            // cout << temp;
            // cout << "\n";
            // cout << "\n";
            // cout << num;
            // cout << "\n";
            // cout << "\n";
            // cout << count;
            // cout << "\n";
            // cout << "\n";

            count += 1;

        } else if (count > finalCount) {

            finalCount = count;
            count = 1;

        } else count = 1;

        temp = num;
        range-=1;

    }

    
    if (count > finalCount) {

        finalCount = count;

    }

    cout << finalCount;

    return 0;

}