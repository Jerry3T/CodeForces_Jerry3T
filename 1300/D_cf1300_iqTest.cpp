#include<iostream>
#include<vector>

using namespace std;

int main() {

    vector<int> list;
    int range = 0;
    cin >> range;
    int odd = 0;
    int even = 0;

    while (range != 0) {

        int num = 0;
        cin >> num;

        if (num % 2 == 0) {

            even+=1;

        } else odd+=1;
        
        list.push_back(num);
        range-=1;

    }

    int length = list.size();

    if (even > odd) {

        for (int s = 0; s < length; s++) {

            if (list.at(s) % 2 != 0) {

                cout << s+1;

            }

        }

    } else if (odd > even) {

        for (int s = 0; s < length; s++) {

            if (list.at(s) % 2 == 0) {

                cout << s+1;

            }

        }

    }

    return 0;

}