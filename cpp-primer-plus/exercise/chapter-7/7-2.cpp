//
// Created by fade on 2023/4/25.
//
#include <iostream>
int input(double *);
void display(const double [], int);
double calc_average(const double *, int);
const int SIZE = 10;
using namespace std;
int main()
{
    auto * scores = new double[SIZE];
    cout << "Please enter at most 10 golf scores (enter q to stop input):" << endl;
    int count = input(scores);
    display(scores, count);
    cout << "The average of " << count << " golf scores is "
         << calc_average(scores, count) << endl;
    return 0;
}
int input(double * scores) {
    int count {};
    while (count < SIZE && cin >> scores[count++]);
    return cin.fail() ? count - 1 : count;
}
void display(const double scores[], int n){
    cout << "All golf scores are: " << endl;
    for (int i = 0; i < n; ++i) {
        cout << scores[i];
        if (i < n - 1) {
            cout << " ";
        }
    }
    cout << endl;
}
double calc_average(const double * scores, int n) {
    double average = 0;
    for (int i = 0; i < n; ++i) {
        average += scores[i];
    }
    return average / n;
}