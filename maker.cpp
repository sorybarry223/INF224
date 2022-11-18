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
#include "maker.h"
using namespace std;

shared_ptr<Photo> MAKER::create_photo(string nom)   {
    shared_ptr<Photo> p(new Photo());
    dictm[nom]=p;
    return p;
}

shared_ptr<Video> MAKER::create_video(string nom)   {
    shared_ptr<Video> v(new Video());
    dictm[nom]=v;
    return v;
}

shared_ptr<Film> MAKER::create_film(string nom)   {
    shared_ptr<Film> f(new Film());
    dictm[nom]=f;
    return f;
}

shared_ptr<GROUPE> MAKER::create_groupe(string nom)   {
    shared_ptr<GROUPE> g(new GROUPE());
    dictp[nom]=g;
    return g;
}
void MAKER::find_and_print_multimedia(string nom)  {
    auto it = dictm.find(nom);
    if (it == dictm.end())
        cout <<"Nom introuvable"<<endl;
    else {
        it->second->affiche(cout);
        //cout<<it->first<<endl;
    }
}
void MAKER::find_and_print_groupe(string nom)  {
    auto it = dictp.find(nom);
    if (it == dictp.end())
        cout <<"Nom introuvable"<<endl;
    else {
        it->second->affiche_groupe();
        //cout<<it->first<<endl;
    }
}

void MAKER::display_maker_multimedia(string nom)  {
    auto it = dictm.find(nom);
    if (it == dictm.end())
        cout <<"Nom introuvable"<<endl;
    else {
        it->second->display();
    }
}