#include <iostream>
#include "tabtenn0.h"

int main() {
    using std::cout;
    // 隐式调用构造器
    TableTennisPlayer player1("Chunk", "Blizzard", true);
    TableTennisPlayer player2("Tara", "Boomdea", false);
    player1.Name();
    if (player1.HasTable())
    {
        cout << ": has a table.\n";
    } else
    {
        cout << ": hasn't a table.\n";
    }
}