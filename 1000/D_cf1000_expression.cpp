#include<iostream>

using namespace std;

int count = 0;

int test(int a, int b, int c) {

    int num = 0;

    if (b == 1) {

        if (b != c && b != a && a <= c) {

            num = (a+b) * c;

        } else if (c >= 1 && a > 1) {

            num = a * (b+c);

        } else num = a + b + c;
        
        count += 1;

    }

    if (a == 1) {

        if (a != c) {

            num = (a+b) * c;

        } else num = a + b + c;

        count+=1;

    }

    return num;

}

int main() {

    int a;
    int b;
    int c;

    cin >> a >> b >> c;

    int test1 = test(a, b, c);
    int test2 = test(c, b, a);

    if (test1 > 0) cout << test1;
    if (test2 > 0 && test1 == 0) cout << test2;
    if (count == 0) cout << a * b * c;

    return 0;

}