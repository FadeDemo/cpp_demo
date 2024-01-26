//
// Created by fade on 2024/1/25.
//

#include <iostream>
#include "boost/lexical_cast.hpp"

int main()
{
    using namespace std;
    cout << "Enter your weight: ";
    float weight;
    cin >> weight;
    string gain = "A 10% increase raises ";
    auto wt = boost::lexical_cast<string>(weight);
    gain += wt + " to ";
    weight = 1.1f * weight;
    gain += boost::lexical_cast<string>(weight) + ".";
    cout << gain << endl;
    return 0;
}