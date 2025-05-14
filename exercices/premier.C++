#include <iostream>
using namespace std;

int main () {
    int x, y = 0;
    cout << "Enter a number: ";
    cin >> x;
    for (int i = 2; i < x; i++) {
        if (x % i == 0) {
            y++;
        }
    }
    if (y == 2) {
        cout << "The number is prime." << endl;
    } else {
        cout << "The number is not prime." << endl;
    }

    return 0;
}