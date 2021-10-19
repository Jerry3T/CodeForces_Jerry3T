#include<iostream>
#include<string>

using namespace std;

int main() {

    string total;
    int initial;
    int final = 0;

    cin >> initial;

    while (initial != 0) {
        
        string a;
        string b;
        string c;

        cin >> a >> b >> c;
        total.append(a + b + c);
        initial -= 1;

    }

    while (total.length() >= 3) {

        int count = 0;
        string eval = total.substr(0, 3);

        for (int i = 0; i < eval.length(); i++) {
            
            if (eval[i] == '1') count+=1;

        }

        if (count >= 2) final += 1;

        total.erase(0, 3);

    }

    cout << ::to_string(final);

    return 0;
    
}