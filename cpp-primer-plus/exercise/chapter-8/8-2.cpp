//
// Created by fade on 2023/4/27.
//
#include <iostream>
const int SIZE = 80;
using namespace std;
struct CandyBar
{
    const char * brand;
    double weight;
    int calorie;
};
void set_candy_bar(CandyBar &, const char * brand = "Millennium Munch", double weight = 2.85, int calorie = 350);
void show_candy_bar(const CandyBar &);
int main()
{
    CandyBar candyBar {};
    cout << "Before reading from console: " << endl;
    set_candy_bar(candyBar);
    show_candy_bar(candyBar);
    char * brand = new char [SIZE];
    double weight {};
    int calorie {};
    cout << "Please enter CandyBar's brand: ";
    cin.getline(brand, SIZE);
    cout << "Please enter CandyBar's weight: ";
    cin >> weight;
    cout << "Please enter CandyBar's calorie: ";
    cin >> calorie;
    cout << "After reading from console: " << endl;
    set_candy_bar(candyBar, brand, weight, calorie);
    show_candy_bar(candyBar);
    return 0;
}
void set_candy_bar(CandyBar & candyBar, const char * brand, double weight, int calorie) {
    candyBar.brand = brand;
    candyBar.weight = weight;
    candyBar.calorie = calorie;
}
void show_candy_bar(const CandyBar & candyBar) {
    cout << "CandyBar's brand is " << candyBar.brand << endl
         << "CandyBar's weight is " << candyBar.weight << endl
         << "CandyBar's calorie is " << candyBar.calorie << endl;
}