#include <iostream>
int main() {
    using namespace std;
    cout << "Enter an interger:";
    int n;
    cin >> n;
    cout << "n      n*n\n";
    cout << n << "      " << n * n << " (decimal)\n";
    cout << hex;
    cout << n << "      " << n * n << " (hexadecimal)\n";
    cout << oct << n << "       " << n * n << " (octal)\n";
    dec(cout);
    cout << n << "      " << n * n << " (decimal)\n";
    return 0;
}