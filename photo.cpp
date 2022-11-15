#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "multimedia.h"
#include "video.h"
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