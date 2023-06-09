//
// Created by fade on 2023/4/21.
//
#include <iostream>
const int Cities = 5;
const int Years = 4;
int main()
{
    using namespace std;
    const char * cities[Cities] = {
            "Gribble City",
            "Gribbletown",
            "New Gribble",
            "San Gribble",
            "Gribble Vista"
    };
    int maxtemps[Years][Cities] = {
            {96, 100, 87, 101, 105},
            {96, 98, 91, 107, 104},
            {97, 101, 93, 108, 107},
            {98, 103, 95, 109, 108}
    };
    cout << "Maximum temperature for 2008 - 2011\n\n";
    for (int i = 0; i < Cities; ++i) {
        cout << cities[i] << ":\t";
        for (auto maxtemp : maxtemps) {
            cout << maxtemp[i] << "\t";
        }
        cout << endl;
    }
    return 0;
}