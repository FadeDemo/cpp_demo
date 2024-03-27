#include <string>
#include "iostream"
#include "fstream"
#include "iterator"
#include "algorithm"
//
// Created by fade on 2024/3/27.
//
int main()
{
    using std::string;
    using std::cin;
    using std::ifstream;
    using std::ofstream;
    using std::ios_base;
    using std::istreambuf_iterator;
    using std::ostreambuf_iterator;
    using std::copy;
    string filename_1, filename_2;
    cin >> filename_1 >> filename_2;
    ifstream source(filename_1, ios_base::binary);
    ofstream dest(filename_2, ios_base::binary);
    copy(istreambuf_iterator<char>(source), istreambuf_iterator<char>(),
            ostreambuf_iterator<char>(dest));
    source.close();
    dest.close();
    return 0;
}