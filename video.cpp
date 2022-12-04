#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "multimedia.h"
#include "video.h"

using namespace std;

void Video::affiche(std::ostream & out) const{
        Multimedia::affiche(out);
        out <<"La duree est: "<<Video::duree<<endl;
}

void Video::display() const{
        string p=Multimedia::get_path();
        string n=Multimedia::get_name();
        string command="open "+ p+n;
        system(command.data());
}

void Video::write(ofstream& file) const{
    file.open("multimedia.txt",ios::app);
    file.write((char*)this, sizeof(this));
}

void Video::read(ifstream& file) const{
    file.open("multimedia.txt", ios::in);
    file.read((char*)this, sizeof(this));
}