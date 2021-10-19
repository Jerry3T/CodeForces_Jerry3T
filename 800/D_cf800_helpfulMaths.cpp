#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {

    string input;
    vector<char> sorter;
        
    cin >> input;

    input.erase(remove(input.begin(), input.end(), '+'), input.end());

    for (int i = 0; i < input.length(); i++) {

        sorter.push_back(input[i]);

    }

    sort(sorter.begin(), sorter.end());

    for (int i = 0; i < sorter.size(); i++) {

        cout << sorter.at(i);

        if (i + 1 != sorter.size()) {

            cout << '+';

        }

    }

    return 0;

}