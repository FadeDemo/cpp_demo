#include <utility>
#include <string>
#include <iostream>

class Person
{
  private:
    std::string name;
  public:
    // generic constructor for passed initial name:
    template<typename STR>
    explicit Person(STR&& n) : name(std::forward<STR>(n)) {
        std::cout << "TMPL-CONSTR for '" << name << "'\n";
    }

    // copy and move constructor:
    Person (Person const& p) : name(p.name) {
        std::cout << "COPY-CONSTR Person '" << name << "'\n";
    }
    Person (Person&& p) : name(std::move(p.name)) {
        std::cout << "MOVE-CONSTR Person '" << name << "'\n";
    }
};

int main()
{
    std::string s = "sname";
    Person p1(s);
    Person p2("temp");
    // not allowed
//    Person p3(p1);
    Person p4(std::move(p1));
    Person const p2c("ctmp");
    Person p3c(p2c);
    return 0;
}
