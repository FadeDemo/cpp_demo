#ifndef STUDENTC_H
#define STUDENTC_H
#include <iostream>
#include <string>
#include <valarray>
class Student {
    typedef std::valarray<double> ArrayDb;
    std::string name;
    ArrayDb scores;
    std::ostream & arr_out(std::ostream & os) const;
public:
    Student() : name("Null Student"), scores() {
        std::cout << "using default constructor" << std::endl;
    }
    explicit Student(const std::string & s) : name(s), scores() {
        std::cout << "using Student(const std::string & s) constructor" << std::endl;
    }
    explicit Student(int n) : name("Nully"), scores(n) {
        std::cout << "using Student(int n) constructor" << std::endl;
    }
    Student(const std::string & s, int n) : name(s), scores(n) {
        std::cout << "using Student(const std::string & s, int n) constructor" << std::endl;
    }
    Student(const std::string & s, const ArrayDb & a) : name(s), scores(a) {
        std::cout << "using Student(const std::string & s, const ArrayDb & a) constructor" << std::endl;
    }
    Student(const char * str, const double * pd, int n) : name(str), scores(pd, n) {
        std::cout << "using Student(const char * str, const double * pd, int n) constructor" << std::endl;
    };
    ~Student() {};
    double Average() const;
    const std::string & Name() const;
    double & operator[](int i);
    double operator[](int i) const;
    friend std::istream & operator>>(std::istream & is, Student & stu);
    friend std::istream & getline(std::istream & is, Student & stu);
    friend std::ostream & operator<<(std::ostream & os, const Student & stu);    
};
#endif