#include <iostream>
#include <string>

int main() {
    using namespace std;
    string one("Lottery Winner!");
    cout << one << endl; // Lottery Winner!
    string two(20, '$');
    cout << two << endl; // $$$$$$$$$$$$$$$$$$$$
    string three(one);
    cout << three << endl; // Lottery Winner!
    one += "Oops!";
    cout << one << endl; // Lottery Winner!Oops!
    two = "Sorry! That was "; // Sorry! That was
    three[0] = 'p'; // pottery Winner!
    string four;
    four = two + three;
    cout << four << endl; // Sorry! That was pottery Winner!
    char alls[] = "All's well that ends well";
    string five(alls, 20);
    cout << five << "!\n"; // All's well that ends
    string six(alls + 6, alls + 10);
    cout << six << ", "; // well
    string seven(&five[6], &five[10]);
    cout << seven << "...\n"; // well
    string eight(four, 7, 16);
    cout << eight << " in motion!" << endl; // That was pottery
    return 0;
}