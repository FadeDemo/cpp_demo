#include <iostream>
#include <new>
#include <cstdlib>
using namespace std;

struct Big
{
    double stuff[200000];
};

int main() {
    Big * pb;
    // try
    // {
        cout << "Trying to get a big block of memory:\n";
        // pb = new Big[10000];
        pb = new (nothrow) Big[10000];
        if (!pb)
        {
            cout << "pb is null\n";
            exit(EXIT_FAILURE);
        }
        cout << "Got past the new request:\n";
    // }
    // catch(bad_alloc & ba)
    // {
    //     cout << "Caught th exception!\n";
    //     cout << ba.what() << endl;
    //     exit(EXIT_FAILURE);
    // }
    cout << "Memory successfully allocated\n";
    pb[0].stuff[0] = 4;
    cout << pb[0].stuff[0] << endl;
    delete [] pb;
    return 0;
}
