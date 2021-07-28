#include<iostream>
#include<string>

using namespace std;

int main() {

    string init;

    cin >> init;

    init[0] = toupper(init[0]);

    cout << init;

    return 0;
}


