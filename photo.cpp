#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "multimedia.h"
#include "photo.h"
using namespace std;

void Photo::affiche(std::ostream & out) const{
        Multimedia::affiche(out);
        out <<"La latitude est: "<<Photo::latitude<<endl;
        out <<"La longitude est: "<<Photo::longitude<<endl;
}

void Photo::display() const{
        string p=Multimedia::get_path();
        string n=Multimedia::get_name();
        string command="open " +p + n;
        system(command.data());
}

void Photo::write(ofstream& file) const{
    file.open("multimedia.txt",ios::app);
    //Error handeling
    if(!file)
        exit(0);
        
    file.write((char*)this, sizeof(this));
}

void Photo::read(ifstream& file) const{
    file.open("multimedia.txt", ios::in);
    //Error handeling
    if(!file)
        exit(0);
        
    file.read((char*)this, sizeof(this));
    /*double max_lat{};
    string max_name{};
    while (!file.eof()) {
        if (this->get_lat() > max_lat) {
            max_lat = this->get_lat();
            max_name = this->get_name();
        }
        file.read((char*)this, sizeof(this));
        
    }
    cout <<max_name<<endl;*/
}