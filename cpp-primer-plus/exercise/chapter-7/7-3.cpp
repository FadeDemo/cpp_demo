//
// Created by fade on 2023/4/25.
//
#include <iostream>
struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
void display(box);
void set_volume(box *);
using namespace std;
int main()
{
    box b {};
    cout << "Please enter the maker of the box: ";
    cin.getline(b.maker, 40);
    cout << "Please enter the height of the box: ";
    cin >> b.height;
    cout << "Please enter the width of the box: ";
    cin >> b.width;
    cout << "Please enter the length of the box: ";
    cin >> b.length;
    set_volume(&b);
    display(b);
    return 0;
}
void display(box b) {
    cout << "The height of the box is " << b.height << endl
         << "The width of the box is " << b.width << endl
         << "The length of the box is " << b.length << endl
         << "The volume of the box is " << b.volume << endl
         << "The maker of the box is " << b.maker << endl;
}
void set_volume(box * pb) {
    pb->volume = pb->length * pb->height * pb->width;
}