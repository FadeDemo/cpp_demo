//
// Created by fade on 2024/3/27.
//
#include <iostream>
#include <fstream>
#include "string"

using namespace std;

int main()
{
    string filename;
    cin >> filename;
    streampos positionEof;

    // Record original eof position.
    ifstream instream(filename, ios::in | ios::binary);
    if (instream.is_open()) {
        instream.seekg(0, ios::end);
        positionEof = instream.tellg();     // store the end-of-file position
        instream.close();
    }
    else
        cout << "Record eof position: file open error" << endl;

    // Append something to the file to simulate the modification.
    ofstream outstream(filename, ios::app);
    if (outstream.is_open()) {
        cout << "write" << endl;
        outstream << "appended text";
        outstream.close();
    }

    // Check what was appended.
    instream.open(filename, ios::in | ios::binary);
    if (instream.is_open()) {
        instream.seekg(positionEof);    // Set the read position to the previous eof
        char c;
        while ( instream.get(c))
            cout << c;

        instream.close();
    }
    else
        cout << "Check modification: file open error!" << endl;

    return 0;
}