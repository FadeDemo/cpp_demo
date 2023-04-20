//
// Created by fade on 2023/4/20.
//
#include <iostream>
#include <string>
int main()
{
    using namespace std;
    cout << "Enter a word:";
    string word;
    cin >> word;
    char temp;
    for (int i = word.size() - 1, j = 0 ; j < i ; --i, ++j) {
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }
    cout << word << "\nDone\n";
    return 0;
}