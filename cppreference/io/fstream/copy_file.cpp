//
// Created by fade on 2024/3/27.
//
#include "fstream"
#include <iostream>
int main()
{
    using std::string;
    using std::cin;
    using std::ifstream;
    using std::ofstream;
    using std::ios_base;
    string filename_1, filename_2;
    cin >> filename_1 >> filename_2;
    ifstream source(filename_1, ios_base::binary);
    ofstream dest(filename_2, ios_base::binary);
    dest << source.rdbuf();
    source.close();
    dest.close();
    return 0;

}