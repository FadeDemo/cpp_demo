//
// Created by fade on 2024/3/27.
//
#include "iostream"
#include <string>
#include "cstdio"
#include "cstdlib"
int main()
{
    using std::string;
    using std::cin;
    string filename_1, filename_2;
    cin >> filename_1 >> filename_2;
    FILE * source = fopen(filename_1.c_str(), "rb");
    FILE * dest = fopen(filename_2.c_str(), "wb");
    if (!source || !dest) {
        exit(-1);
    }
    char buffer[1024];
    size_t length;
    while (length = fread(buffer, sizeof(char), 1024, source)) {
        fwrite(buffer, sizeof(char), length, dest);
    }
    fclose(dest);
    fclose(source);
    return 0;
}