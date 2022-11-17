#ifndef GROUPE_H
#define GROUPE_H

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <memory>
#include <vector>
#include <list>

#include "multimedia.h"
#include "video.h"
#include "photo.h"
#include "film.h"
using namespace std;

class GROUPE:public list<Multimedia *> groupe{
private:
    string nom_groupe;
public:
    GROUPE(){}
    GROUPE(string ng):nom_groupe(ng){}
    string get_ng() const{return nom_groupe;}
    void set_gn(string ng){nom_groupe=ng;}
    void affiche_groupe() const;
};


#endif