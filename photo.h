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
    ~Photo(){}
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
    void affiche(std::ostream & out) const override{
        Multimedia::affiche(out);
        out <<"La latitude est: "<<Photo::latitude<<endl;
        out <<"La longitude est: "<<Photo::longitude<<endl;
    }
    void display() const override{
        string p=Multimedia::get_path();
        string n=Multimedia::get_name();
        string command="open " +p + n;
        system(command.data());
    }
};

#endif