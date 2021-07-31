#include<iostream>
#include<string>

using namespace std;

int main() {

    string players;

    cin >> players;

    for (int i = 0; i < players.length(); i++) {

        int current = 1;

        for (int j = i+1; j < players.length(); j++) {
            
            if(players[i] != players[j]) break;

            current += 1;

        }

        if (current >= 7) {
            cout << "YES";
            break;
        } else if (i == players.length() - 1) {
            cout << "NO";
        }

    }

    return 0;

}