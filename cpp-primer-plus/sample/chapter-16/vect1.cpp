#include <iostream>
#include <string>
#include <vector>

const int NUM = 5;
int main() {
    using std::vector;
    using std::string;
    using std::cin;
    using std::cout;
    vector<int> ratings(NUM);
    vector<string> titles(NUM);
    cout << "Your will do exactly as told. You will enter\n"
    << NUM << " book titles and your ratings (0-10).\n";
    for (size_t i = 0; i < NUM; i++)
    {
        cout << "Enter title #" << i + 1 << ": ";
        getline(cin, titles[i]);
        cout << "Enter your rating (0-10): ";
        cin >> ratings[i];
        cin.get();
    }
    cout << "Thank you. You entered the following:\n"
    << "Rating\tBook\n";
    for (size_t i = 0; i < NUM; i++)
    {
        cout << ratings[i] << "\t" << titles[i] << std::endl;
    }
    return 0;
}