#include<iostream>

using namespace std;

bool fuck(int num) {

    bool check = num % 7 == 0 or num % 4 == 0 or num % 47 == 0 or num % 74 == 0 or num % 744 == 0 or 
    num % 774 == 0 or num % 777 == 0 or num % 747 == 0 or num % 477 == 0 or num % 447 == 0 or 
    num % 474 == 0 or num % 444 == 0;

    return check;

}

int main() {

    //possible combination 7, 4, 47, 74, 744, 774, 777
    //fuck this problem 747, 477, 447, 474, 444, 

    int num;

    cin >> num;

    if (fuck(num) == true) cout << "YES";
    else cout << "NO";

    return 0;
}