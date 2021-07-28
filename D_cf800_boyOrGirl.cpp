#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

int main() {
    
    string name;
    int count = 0;

    cin >> name;

    unordered_map<char, int> m;

    for (int i = 0; i < name.length(); i++) {

        m[name[i]]++;

    }

    if(m.size() % 2 == 0) {
        cout << "CHAT WITH HER!";
    } else cout << "IGNORE HIM!";
    
    return 0;
}