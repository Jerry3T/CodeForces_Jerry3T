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