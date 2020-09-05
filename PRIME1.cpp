#include<iostream>
#include<cmath>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long n;
        cin >> n;
        while (n % 2 == 0) {
            cout << 2 << " ";
            n = n / 2;
        }
        for (long long i = 3; i <= sqrt(n); i = i + 2) {
            while (n%i == 0) {
                cout << i << " ";
                n = n / i;
            }
        }

        if (n > 2) cout << n << " ";
        cout<<endl;
    }
    return 0;
}