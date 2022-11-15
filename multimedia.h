#ifndef MULTIMEDIA_H
#define MULTIMEDIA_H



#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
class Multimedia{
private:
    string name{};
    string path{};
public:
    Multimedia():name{},path{}{}
    Multimedia(string n, string p):name(n),path(p){}
    ~Multimedia(){}
    void set_name(string n);
    void set_path(string p);
    string get_name() const;
    string get_path() const;
    void affiche(std::ostream & out) const;
};



#endif