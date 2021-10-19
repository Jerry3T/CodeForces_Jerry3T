#include<iostream>
#include<vector>

int main() {

    int count = 0;
    int initial;
    int place;
    int minimum;

    std::cin >> initial >> place;

    std::vector<int> parts[initial];

    while (initial > 0) {

        int temp;

        std::cin >> temp;

        parts->push_back(temp);

        initial -= 1;

    }

    minimum = parts->at(place-1);

    for (int i = 0; i < parts->size(); i++) {

        if (parts->at(i) >= minimum && parts->at(i) > 0) {

            count += 1;

        }

    }

    std::cout << count;

    return 0;

}