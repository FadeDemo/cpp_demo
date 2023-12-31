#ifndef STUDENTI_H
#define STUDENTI_H

#include <iostream>
#include <valarray>
#include <string>

class Student : std::string, private std::valarray<double> {
    typedef std::valarray<double> ArrayDb;
    std::ostream & arr_out(std::ostream & os) const;
public:
    Student() : std::string("Null Student"), ArrayDb() {
        std::cout << "using default constructor" << std::endl;
    }
    explicit Student(const std::string & s) : std::string(s), ArrayDb() {
        std::cout << "using Student(const std::string & s) constructor" << std::endl;
    }
    explicit Student(int n) : std::string("Nully"), ArrayDb(n) {
        std::cout << "using Student(int n) constructor" << std::endl;
    }
    Student(const std::string & s, int n) : std::string(s), ArrayDb(n) {
        std::cout << "using Student(const std::string & s, int n) constructor" << std::endl;
    }
    Student(const std::string & s, const ArrayDb & a) : std::string(s), ArrayDb(a) {
        std::cout << "using Student(const std::string & s, const ArrayDb & a) constructor" << std::endl;
    }
    Student(const char * str, const double * pd, int n) : std::string(str), ArrayDb(pd, n) {
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