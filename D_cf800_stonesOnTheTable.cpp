#include<iostream>
#include<string>

using namespace std;

int main() {
    
    int stones;
    string colors;
    int count = 0;

    cin >> stones >> colors;

    for(int i = 0; i < colors.length(); i++) {

        if(i == 0) continue;

        if(colors[i] == colors[i-1]) {
            count+=1;
        }

    }

    cout << count;

    return 0;

}