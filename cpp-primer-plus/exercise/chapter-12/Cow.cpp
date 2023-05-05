//
// Created by fade on 2023/5/5.
//

#include "Cow.h"
#include "cstring"
#include <iostream>
Cow::Cow() {
    name[0] = '\0';
    hobby = nullptr;
    weight = 0;
}
Cow::Cow(const char * nm, const char * ho, double wt) {
    auto lnm = strlen(nm);
    auto lho = strlen(ho);
    auto len = lnm > 19 ? 19 : lnm;
    strncpy(name, nm, len);
    name[len] = '\0';
    hobby = new char[lho + 1];
    strncpy(hobby, ho, lho + 1);
    weight = wt;
}
Cow::Cow(const Cow & c) {
    std::cout << "constructor..." << std::endl;
    if (this != &c) {
        strcpy(name, c.name);
        hobby = new char[strlen(c.hobby) + 1];
        strcpy(hobby, c.hobby);
        weight = c.weight;
    }
}
Cow::~Cow() {
    std::cout << "destroy..." << std::endl;
    delete hobby;
}
Cow & Cow::operator=(const Cow & c) {
    std::cout << "override operator..." << std::endl;
    if (this != &c) {
        strcpy(name, c.name);
        hobby = new char[strlen(c.hobby) + 1];
        strcpy(hobby, c.hobby);
        weight = c.weight;
    }
    return *this;
}
void Cow::ShowCow() const {
    using std::cout;
    using std::endl;
    cout << "name: " << name << endl
         << "hobby: " << hobby << endl
         << "weight: " << weight << endl;
}