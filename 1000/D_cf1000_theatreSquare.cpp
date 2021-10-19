#include<iostream>
#include<math.h>

using namespace std;

int main() {

    int n;
    int m;
    int a;
    long long int lsquares;
    long long int wsquares;

    cin >> n >> m >> a;

    if (a < n) {
        
        double one = (double)n/a;

        lsquares = ceil(one);

    } else lsquares = 1;

    if (a < m) {
        
        double two = (double)m/a;

        wsquares = ceil(two);

    } else wsquares = 1;

    cout << lsquares * wsquares;

    return 0;

}