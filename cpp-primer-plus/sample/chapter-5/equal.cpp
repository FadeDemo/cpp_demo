//
// Created by fade on 2023/4/20.
//
#include <iostream>
int main()
{
    using namespace std;
    int quizscores[10] = {
            20, 20, 20, 20, 20, 19, 20, 18, 20, 20
    };
    cout << "Doing it right:\n";
    for (int i = 0; quizscores[i] == 20; ++i) {
        cout << "quiz " << i << " is a 20\n";
    }
    cout << "Doing it dangerously wrong:\n";
    // fixme wrong condition
    for (int i = 0; quizscores[i] = 20; ++i) {
        cout << "quiz " << i << " is a 20\n";
    }
    return 0;
}