# include <iostream>
using namespace std;

int main () {
    int x;
    cout << "enter un nombre :";
    cin >> x;
    /* cout << --x << ", " << x + 2; */
    cout << --(--x) << endl;
    cout << ++x << endl;

    return 0;
}