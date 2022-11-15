#include "multimedia.h"
#include <iostream>
#include <stdlib.h>
#include <string.h>

void Multimedia::set_name(string n){
    name=n;
}
void Multimedia::set_path(string p){
    path=p;
}

string Multimedia::get_name() const{
    return name;
}
string Multimedia::get_path() const{
    return path;
}

void Multimedia::affiche(std::ostream & out ) const{
    out <<"Le nom est: "<<Multimedia::get_name()<<endl;
    out <<"Le chemin est: "<<Multimedia::get_path()<<endl;
}