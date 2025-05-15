#include <iostream>

using namespace std;

int fastExponentiationRecurssion(int a, int b) {
    if (b == 1) {
        return a;
    }
    if (b == 0) {
        return 1;
    }
    int smallAns = fastExponentiationRecurssion(a, b / 2);
    int ans = smallAns * smallAns;
    if (b & 1) {
        ans *= a;
    }
    return ans;
}//O(logn)

int fastExponentiation(int a, int b) {
    int ans = 1;
    while (b > 0) {
        if (b & 1) {
            ans *= a;
        }
        a *= a;
        b >>= 1;
    }
    return ans;
}//O(logn)

int slowExponentiation(int a, int b) {
    int ans = 1;
    for (int i = 0; i < b; i++) {
        ans *= a;
    }
    return ans;
} //O(b)

int main() {
    int a, b;
    cout << "Enter a" << endl;
    cin >> a;
    cout << "Enter b" << endl;
    cin >> b;
    cout << "a^b is " << fastExponentiation(a, b) << endl;
}
