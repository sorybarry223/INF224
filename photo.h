#ifndef PHOTO_H
#define PHOTO_H

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "multimedia.h"
using namespace std;

class Photo:public Multimedia{
private:
    double latitude{};
    double longitude{};
public:
    Photo(){}
    Photo(string n, string p, double lat, double longi):Multimedia(n,p){
        latitude=lat;
        longitude=longi;
}
    virtual ~Photo(){cout<<"Adieu monde cruel..."<<endl;}
    void set_lat(double lat){
            latitude=lat;
    }
    void set_long(double longi){
        longitude=longi;
    }
    double get_lat() const{
        return latitude;
    }
    double get_long() const{
        return longitude;
    }
    void affiche(std::ostream & out) const override;

    void display() const override;

    void write(ofstream& file)const override;
    void read(ifstream& file)const override;
};

#endif