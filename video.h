#ifndef VIDEO_H
#define VIDEO_H

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "multimedia.h"
using namespace std;

class Video:public Multimedia{
private:
    unsigned int duree{};
public:
    Video(){}
    Video(string n, string p, unsigned int d):Multimedia(n,p){
        duree=d;
    }
    ~Video(){}
    void set_duree(unsigned int d){
        duree=d;
    }
    unsigned int get_duree() const{
        return duree;
    }
    void affiche(std::ostream & out) const override{
        Multimedia::affiche(out);
        out <<"La duree est: "<<Video::duree<<endl;
    }
    void display() const override{
        string p=Multimedia::get_path();
        string n=Multimedia::get_name();
        string command="open "+ p+n;
        system(command.data());
    }
};

#endif