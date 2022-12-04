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
   virtual ~Video(){cout<<"Adieu monde cruel..."<<endl;}
    void set_duree(unsigned int d){
        duree=d;
    }
    unsigned int get_duree() const{
        return duree;
    }
    void affiche(std::ostream & out) const override;
    void display() const override;
    void write(ofstream& file)const override;
    void read(ifstream& file)const override;
};

#endif