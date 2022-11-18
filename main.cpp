//
// main.cpp
// Created on 21/10/2018
//

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
#include "groupe.h"
#include "maker.h"
using namespace std;

int main(int argc, const char *argv[])
{
    
    /*Multimedia **multi=new Multimedia *[5];//Tableau de pointeurs sur Multimedia
    int count=0;
    multi[count++]=new Photo("logo-2.png", "~/Downloads/",0.5,0.5);
    multi[count++]=new Video("cvstandard", "~/Downloads/",10);
    multi[count++]=new Photo("Photo_cv.JPG", "~/Downloads/",0.5,0.5);
    multi[count++]=new Video("picture_1.png", "~/Downloads/",10);
    multi[count++]=new Photo("logo-2.png", "~/Downloads/",0.5,0.5);
    for(int i=0;i<count;++i){
        multi[i]->display(); 
    }*/
    /*
    int* chap=new int[5];
    for(int i=0;i<5;i++){
        chap[i]=i;
    }

    Film *f=new Film("my_film","~/Downloads/",10,5,chap);
    f->affiche_durees(chap,5);
    delete[]chap;
    f->affiche_durees(chap,5);*/

    /*
    GROUPE gp("gp1");
    gp.push_back(shared_ptr<Photo>(new Photo("logo-2.png", "~/Downloads/",0.5,0.5)));
    gp.push_back(shared_ptr<Video>(new Video("cvstandard", "~/Downloads/",10)));
    gp.push_back(shared_ptr<Photo>(new Photo("Photo_cv.JPG", "~/Downloads/",0.5,0.5)));
    gp.push_back(shared_ptr<Photo>(new Photo("logo-2.png", "~/Downloads/",0.5,0.5)));
    //gp.affiche_groupe(); 
    auto it=gp.begin();
    advance(it,3);
    gp.erase(gp.begin(), it);
    gp.affiche_groupe(); */


    using GPM = std::shared_ptr<Multimedia>;
    using GPP = std::shared_ptr<GROUPE>;

    using Dictm = std::map<string, GPM>;
    using Dictp = std::map<string, GPP>;
    Dictm dm;
    Dictp dp;
    MAKER *maker=new MAKER(dm,dp);
    shared_ptr<Photo> p1;
    p1=maker->create_photo("logo-2.png");
    p1->set_name("logo-2.png");
    p1->set_path("~/Downloads/");
    p1->set_lat(0.5);
    p1->set_long(0.5);
    maker->find_and_print_multimedia("logo-2.png");
    maker->display_maker_multimedia("logo-2.png");

    shared_ptr<GROUPE> p2;
    p2=maker->create_groupe("sory");
    p2->push_back(shared_ptr<Photo>(new Photo("logo-2.png", "~/Downloads/",0.5,0.5)));
    p2->push_back(shared_ptr<Video>(new Video("cvstandard", "~/Downloads/",10)));
    p2->push_back(shared_ptr<Photo>(new Photo("Photo_cv.JPG", "~/Downloads/",0.5,0.5)));
    p2->push_back(shared_ptr<Photo>(new Photo("logo-2.png", "~/Downloads/",0.5,0.5)));
    maker->find_and_print_groupe("sory");
    return 0; 
}