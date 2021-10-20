//credit to @buglinjo, i spent so long on this problem... 1000 for this, bleh, bleh
//https://github.com/buglinjo/codeforces/blob/master/58A%20-%20Chat%20room.cpp

#include<iostream>

using namespace std;

int main() {

    string s; 

    cin >> s;

    string hello = "hello";

    int size = s.size();
    
    int index = 0;

    for (int i = 0; i < size; i++) {

        if (s[i] == hello[index]) {

            index+=1;

        }

    }

    if (index == 5) {

        cout << "YES";

    } else cout << "NO";
    
}