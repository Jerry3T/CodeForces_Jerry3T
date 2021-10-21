#include<iostream>
#include<vector>

using namespace std;

int main() {

    vector<int> ones;
    vector<int> twos;
    vector<int> threes;
    vector<int> fours;
    int groups = 0;
    int taxis = 0;
    bool onesRanOut = false;

    cin >> groups;

    while (groups != 0) {

        int num;

        cin >> num;

        if (num == 1) {

            ones.push_back(num);

        }

        if (num == 2) {

            twos.push_back(num);

        }

        if (num == 3) {

            threes.push_back(num);

        }

        if (num == 4) {

            fours.push_back(num);

        }

        groups -= 1;

    }

    taxis += fours.size();

    while (true) {

        if (threes.size() > 0) {

            if (ones.size() > 0) {

                ones.pop_back();
                threes.pop_back();
                taxis+=1;

            } else {

                onesRanOut = true;
                break;

            }

        } else {

            break;

        }
    }

    if (onesRanOut) {

        taxis+=threes.size();

    }

    while(true) {

        if (twos.size() >= 2) {

            twos.pop_back();
            twos.pop_back();
            taxis+=1;

        } else if (twos.size() == 1 && ones.size() >= 2) {

            twos.pop_back();
            ones.pop_back();
            ones.pop_back();
            taxis+=1;

        } else if (twos.size() == 1 && ones.size() == 1) {
            
            twos.pop_back();
            ones.pop_back();
            taxis+=1;

        } else if (twos.size() == 1) {
            
            twos.pop_back();
            taxis+=1;

        } else if (ones.size() >= 4) {

            ones.pop_back();
            ones.pop_back();
            ones.pop_back();
            ones.pop_back();
            taxis+=1;

        } else if (ones.size() > 0) {

            int length = ones.size();

            for (int i = 0; i < length; i++) {

                ones.pop_back();

            }

            taxis+=1;

        } else break;
    
    }

    cout << taxis;

    return 0;

}