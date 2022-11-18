#ifndef MAKER_H
#define MAKER_H


#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <memory>
#include <vector>
#include <list>
#include <map>

#include "multimedia.h"
#include "video.h"
#include "photo.h"
#include "film.h"
#include "groupe.h"
using namespace std;

using GPM = std::shared_ptr<Multimedia>;
using GPP = std::shared_ptr<GROUPE>;

using Dictm = std::map<string, GPM>;
using Dictp = std::map<string, GPP>;

class MAKER{
private:
    Dictm dictm;
    Dictp dictp;
public:
    MAKER(){}
    MAKER(Dictm dm,Dictp dp):dictm(dm),dictp(dp){}
    shared_ptr<Photo>  create_photo(string nom);
    shared_ptr<Video>  create_video(string nom); 
    shared_ptr<Film>   create_film(string nom); 
    shared_ptr<GROUPE> create_groupe(string nom); 
    void find_and_print_multimedia(string nom);
    void find_and_print_groupe(string nom);
    void display_maker_multimedia(string nom);
};


#endif